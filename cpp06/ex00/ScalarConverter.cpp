/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:03 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/06 11:19:25 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int isInt(std::string arg)
{
	unsigned int i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i = 1;
	while(i < arg.length())
	{
		if (arg[i] < '0' || arg[i] > '9')
			return(0);
		i++;
	}
	return (1);
}
int isChar(std::string arg)
{
	if (arg.length() > 1)
		return (0);
	return (1);
}

int isFloat(std::string arg)
{
	unsigned int	i;
	int	dot;
	int	sign;

	dot = 0;
	sign = 0;
	i = 1;
	if (arg[0] == '-' || arg[0] == '+')
		sign++;
	if ((arg[0] < 48 || arg[0] > 57) && !sign)
		return (0);
	while (i < arg.length() - 1)
	{
		if (arg[i] == 46)
		{
			dot++;
			i++;
		}
		if (arg[i] < 48 || arg[i] > 57 || dot > 1)
			return (0);
		i++;
	}
	if (arg[i] != 'f')
		return (0);
	return (1);
}
int isDouble(std::string arg)
{
	unsigned int	i;
	int	dot;
	int	sign;

	dot = 0;
	sign = 0;
	i = 1;
	if (arg[0] == '-' || arg[0] == '+')
		sign++;
	if ((arg[0] < 48 || arg[0] > 57) && !sign)
		return (0);
	while (i < arg.length())
	{
		if (arg[i] == 46)
		{
			dot++;
			i++;
		}
		if (arg[i] < 48 || arg[i] > 57 || dot > 1)
			return (0);
		i++;
	}
	return (1);
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) { (void)copy; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& src){ (void)src; return (*this); }

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::toChar(char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	}	
	else
	{
		
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	}
}

void ScalarConverter::toInt(float i)
{
	if (i >= 0 && i <= 127)
	{
		if ((i >= 0 && i <= 31) || i == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(i) << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	
	if (i <= static_cast<double>(INT_MAX) && i >= static_cast<double>(INT_MIN))
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void ScalarConverter::toDouble(double d)
{
	if (d >= 0 && d <= 127)
	{
		if ((d >= 0 && d <= 31) || d == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	
	if (d <= static_cast<double>(INT_MAX) && d >= static_cast<double>(INT_MIN))
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << (float)d << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::toFloat(float f)
{
	if (f >= 0 && f <= 127)
	{
		if ((f >= 0 && f <= 31) || f == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(f) << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	
	if (f <= static_cast<float>(INT_MAX) && f >= static_cast<float>(INT_MIN))
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << (double)f << std::endl;
}

void ScalarConverter::convert(std::string arg)
{
	if (isChar(arg))
		toChar(*(arg.c_str()));
	else if (isInt(arg))
		toInt(atof(arg.c_str()));
	else if (isDouble(arg))
		toDouble(atof(arg.c_str()));
	else if (isFloat(arg))
		toFloat(atof(arg.c_str()));
}