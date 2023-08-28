/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:45:50 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 09:33:54 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::display( void ) const
{
	std::cout << index <<std::endl;
	std::cout << firstName <<std::endl;
	std::cout << lastName <<std::endl;
	std::cout << nickName <<std::endl;
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
		if (!tmp.empty())
			break;
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
		if (!tmp.empty())
			break;
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
		if (!tmp.empty())
			break;
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
		if (!tmp.empty())
			break;
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
		if (!tmp.empty())
			break;
	}
	darkSecret = tmp;
}