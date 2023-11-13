/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:47 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 17:07:13 by yloutfi          ###   ########.fr       */
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

int get_value(const std::string& buff)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == buff)
			return (i);
	}
	return (4);
}
void Harl::complain( std::string level )
{
	while (1)
	{
		int value = get_value(level);
		switch (value)
		{
			case 0:
				debug();
			case 1:
				info();
			case 2:
				warning();
			case 3:
				error();
				return;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
		}
	}
}