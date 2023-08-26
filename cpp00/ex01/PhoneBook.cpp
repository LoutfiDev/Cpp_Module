/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:22:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/26 12:09:31 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void formated_print(std::string str)
{
	if (size(str) > 10)
	{
		for(int i=0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		std::cout << str;	
		int len = size(str);
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
	}
	std::cout << "|";
}

void PhoneBook::display(PhoneBook phonebook)
{
	int i;
	int index;

	i = 0;
	if (phonebook.index > 7)
		index = 8;
	else
		index = phonebook.index;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "index     |first Name|last Name |nick Name |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (i < index)
	{
		std::cout << phonebook.contacts[i].index << "         |";
		formated_print(phonebook.contacts[i].firstName);
		formated_print(phonebook.contacts[i].lastName);
		formated_print(phonebook.contacts[i].nickName);
		std::cout << std::endl << "--------------------------------------------" << std::endl;
		i++;
	}
}

void PhoneBook::set_contact(PhoneBook *phonebook)
{
	int index;
	
	if (phonebook->index == -1)
		phonebook->index = 0;
	if (phonebook->index > 7)
		index = phonebook->old_index;
	else
		index = phonebook->index;
	phonebook->contacts[index] = phonebook->contacts[index].set_data();
	phonebook->contacts[index].index = index + 1;
	phonebook->index++;
	phonebook->old_index = phonebook->index % 8;
	std::cout << "contact added successfully !" << std::endl;
}

void PhoneBook::get_contact(PhoneBook phonebook)
{
	int index;
	std::string tmp;

	if (phonebook.index == -1)
	{
		std::cout << "Warning: phonebook is empty till now!" << std::endl;
		return;
	}
	phonebook.display(phonebook);
	while (1)
	{
		while (1)
		{
			std::cout << "entre contact's id: ";
			std::getline(std::cin, tmp);
			if (std::cin.eof())
				exit (0);
			if (!tmp.empty())
				break;
		}
		index = atoi(tmp.c_str());
		if (index <= 0 || index > phonebook.index + 1)
		{
			std::cout << "Error: invalid id!" << std::endl;
			std::cout << "Hint: enter an id existe in contacts table" << std::endl;
		}
		else
		{
			Contact contact;
			contact = phonebook.contacts[index - 1];
			contact.display(contact);
			break;
		}
	}
	return ;
}