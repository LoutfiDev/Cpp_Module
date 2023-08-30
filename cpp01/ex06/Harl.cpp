/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:47 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/30 12:12:27 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG COMPLAINE !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO COMPLAINE !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING COMPLAINE !" << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR COMPLAINE !" << std::endl;
}
enum class MyEnum {
    DEBUG,
    INFO,
    WARNING,
	ERROR,
	DEFAULT
};

MyEnum get_value(const std::string& buff)
{
	if (buff == "DEBUG")
		return (MyEnum::DEBUG);
	else if (buff == "INFO")
		return (MyEnum::INFO);
	else if (buff == "WARNING")
		return (MyEnum::WARNING);
	else if (buff == "ERROR")
		return (MyEnum::ERROR);
	else
		return (MyEnum::DEFAULT);
}
void Harl::complain( std::string level )
{
	while (1)
	{
		MyEnum value = get_value(level);
		switch (value)
		{
			case MyEnum::DEBUG:
				debug();
			case MyEnum::INFO:
				info();
			case MyEnum::WARNING:
				warning();
			case MyEnum::ERROR:
				error();
				return;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
		}
	}
}