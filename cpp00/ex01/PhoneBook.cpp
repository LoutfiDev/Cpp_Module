/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:22:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/07 11:18:40 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void formated_print(std::string str)
{
	if (str.length() > 10)
	{
		for(int i=0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		std::cout << str;	
		int len = str.length();
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
	}
	std::cout << "|";
}

void PhoneBook::display() const
{
	int i;
	int _index;

	i = 0;
	if (index > 7)
		_index = 8;
	else
		_index = index;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "index     |first Name|last Name |nick Name |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (i < _index)
	{
		std::cout << contacts[i].index << "         |";
		formated_print(contacts[i].get_firstName());
		formated_print(contacts[i].get_lastName());
		formated_print(contacts[i].get_nickName());
		std::cout << std::endl << "--------------------------------------------" << std::endl;
		i++;
	}
}

void PhoneBook::set_contact()
{
	int _index;
	
	if (index == -1)
		index = 0;
	if (index > 7)
		_index = old_index;
	else
		_index = index;
	contacts[_index].index = _index + 1;
	contacts[_index].set_firstName();
	contacts[_index].set_lastName();
	contacts[_index].set_nickName();
	contacts[_index].set_phoneNumber();
	contacts[_index].set_darkSecret();
	index++;
	old_index = index % 8;
	std::cout << "contact added successfully !" << std::endl;
}

void PhoneBook::get_contact() const
{
	int _index;
	std::string tmp;

	if (index == -1)
	{
		std::cout << "Warning: phonebook is empty till now!" << std::endl;
		return;
	}
	display();
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
		_index = atoi(tmp.c_str());
		if (_index <= 0 || _index > index)
		{
			std::cout << "Error: invalid id!" << std::endl;
			std::cout << "Hint: enter an id existe in contacts table" << std::endl;
		}
		else
		{
			contacts[_index - 1].display();
			break;
		}
	}
	return ;
}