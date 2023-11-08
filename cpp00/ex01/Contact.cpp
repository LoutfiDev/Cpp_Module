/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:45:50 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/08 15:14:43 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int valid_input(std::string str)
{
	for(int i=0; i < (int)str.length(); i++)
	{
		if ((str[i] <= 31 || str[i] == 127))
			return (0);
	}
	return (1);
}

int valid_number(std::string str)
{
	for(int i=0; i < (int)str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

void Contact::display( void ) const
{
	std::cout << index <<std::endl;
	std::cout << firstName <<std::endl;
	std::cout << lastName <<std::endl;
	std::cout << nickName <<std::endl;
	std::cout << phoneNumber <<std::endl;
	std::cout << darkSecret <<std::endl;
}

void Contact::set_firstName()
{
	std::string tmp;
	while (1)
	{
		std::cout << "entre contact's first name: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (0);
		if (!tmp.empty() && valid_input(tmp))
			break;
		std::cout << "Invalid input !!" << std::endl;
	}
	firstName = tmp;
}

void Contact::set_lastName()
{
	std::string tmp;
	while (1)
	{
		std::cout << "entre contact's last name: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (0);
		if (!tmp.empty() && valid_input(tmp))
			break;
		std::cout << "Invalid input !!" << std::endl;
	}
	lastName = tmp;
}
void Contact::set_nickName()
{
	std::string tmp;
	while (1)
	{
		std::cout << "entre contact's nick name: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (0);
		if (!tmp.empty() && valid_input(tmp))
			break;
		std::cout << "Invalid input !!" << std::endl;
	}
	nickName = tmp;
}

void Contact::set_phoneNumber()
{
	std::string tmp;
	while (1)
	{
		std::cout << "entre contact's phone number: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (0);
		if (!tmp.empty() && valid_input(tmp) && valid_number(tmp))
			break;
		std::cout << "Invalid input !!" << std::endl;
	}
	phoneNumber = tmp;
}

void Contact::set_darkSecret()
{
	std::string tmp;
	while (1)
	{
		std::cout << "entre contact's dark secret: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (0);
		if (!tmp.empty() && valid_input(tmp))
			break;
		std::cout << "Invalid input !!" << std::endl;
	}
	darkSecret = tmp;
}


std::string Contact::get_firstName( void ) const
{
	return firstName;
}

std::string Contact::get_lastName( void ) const
{
	return lastName;
}

std::string Contact::get_nickName( void ) const
{
	return nickName;
}

std::string Contact::get_phoneNumber( void ) const
{
	return phoneNumber;
}

std::string Contact::get_darkSecret( void ) const
{
	return darkSecret;
}