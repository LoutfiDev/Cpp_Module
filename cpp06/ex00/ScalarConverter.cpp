/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:03 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/06 16:10:27 by yloutfi          ###   ########.fr       */
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

void ScalarConverter::check(std::string arg)
{
	try
	{
		if (!strcmp(arg.c_str(), "+inf") || !strcmp(arg.c_str(), "+inff"))
        	throw 2;
   		if (!strcmp(arg.c_str(), "-inf") || !strcmp(arg.c_str(), "-inff"))
        	throw 3;
		if (!strcmp(arg.c_str(), "nanf") || !strcmp(arg.c_str(), "nan"))
			throw 4;
		convert(arg);
	}
	catch (int e)
	{
		if (e == 1)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        }
        else
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            if (e == 2)
            {
                std::cout << "float: +inff" << std::endl;
                std::cout << "double: +inf" << std::endl;
            }
            else if (e == 3)
            {
                std::cout << "float: -inff" << std::endl;
                std::cout << "double: -inf" << std::endl;
            }
            else
            {
                std::cout << "float: nanf" << std::endl;
                std::cout << "double: nan" << std::endl;
            }
        }
	}
}

void ScalarConverter::convert(std::string arg)
{
	long double nbr;
	if (isChar(arg))
	{
		nbr = static_cast<int>(arg[0]);
		toChar(nbr);
		toInt(nbr);
		toFloat(nbr);
		toDouble(nbr);
	}
	else if (isInt(arg) || isFloat(arg) || isDouble(arg))
	{
		nbr = atof(arg.c_str());
		toChar(nbr);
		toInt(nbr);
		toFloat(nbr);
		toDouble(nbr);
	}
	else
		throw 1;
}

void ScalarConverter::toChar(double nbr)
{
	if (nbr > std::numeric_limits<char>::max() || nbr < std::numeric_limits<char>::min())
        std::cout << "impossible" << std::endl;
	if (!isprint(nbr))
			std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(nbr) << std::endl;
}

void ScalarConverter::toInt(double nbr)
{
	if (nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
        std::cout << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
}

void ScalarConverter::toFloat(double nbr)
{
	if (nbr > std::numeric_limits<float>::max())
        std::cout << "impossible" << std::endl;
	else
	{
		if (!fmod(static_cast<double>(nbr), 1.0))
			std::cout << "double: " << static_cast<double>(nbr) << ".0f" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(nbr) << "f" << std::endl;
	}
}

void ScalarConverter::toDouble(double nbr)
{
	if (nbr > std::numeric_limits<double>::max())
        std::cout << "impossible" << std::endl;
	else
	{
		if (!fmod(static_cast<double>(nbr), 1.0))
			std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(nbr) << std::endl;
		
	}
}

