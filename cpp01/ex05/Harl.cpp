/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:47 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 16:55:53 by yloutfi          ###   ########.fr       */
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
	std::cout << "DEBUG COMPLAINE !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "INFO COMPLAINE !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING COMPLAINE !" << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR COMPLAINE !" << std::endl;
}
void Harl::complain( std::string level )
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::* ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
		{
			(this->*(ptr[i]))();
			return;
		}
	}
	std::cout << "Error: invalid choice: " << level << std::endl;
	std::cout << "Hint: valid choices: DEBUG/INFO/WARNING/ERROR" << std::endl;
}