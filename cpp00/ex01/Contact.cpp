/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:45:50 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/26 10:33:11 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::display(Contact contact)
{
	std::cout << contact.index <<std::endl;
	std::cout << contact.firstName <<std::endl;
	std::cout << contact.lastName <<std::endl;
	std::cout << contact.nickName <<std::endl;
}
void set_firstName(Contact *contact)
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
	contact->firstName = tmp;
}

void set_lastName(Contact *contact)
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
	contact->lastName = tmp;
}
void set_nickName(Contact *contact)
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
	contact->nickName = tmp;
}

void set_phoneNumber(Contact *contact)
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
	contact->phoneNumber = tmp;
}

void set_darkSecret(Contact *contact)
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
	contact->darkSecret = tmp;
}

Contact Contact::set_data()
{
	Contact contact;
	set_firstName(&contact);
	set_lastName(&contact);
	set_nickName(&contact);
	set_phoneNumber(&contact);
	set_darkSecret(&contact);
	return (contact);
}