/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:22:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/09 16:02:49 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : index(-1), count(0), old_index(0) {}

PhoneBook::~PhoneBook() {}

void formated_print(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(1, '.');
	}
	std::cout << std::setw(10) << str;
	std::cout << "|";
}

void PhoneBook::display() const
{
	int i;
	int _index;

	i = 0;
	if (index > MAX)
		_index = MAX;
	else
		_index = index;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "     index|first Name| last Name| nick Name|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (i < _index)
	{
		std::cout << std::setw(10) << contacts[i].index << "|";
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
	if (count > MAX - 1)
		_index = old_index;
	else
		_index = count;
	contacts[_index].index = _index + 1;
	contacts[_index].set_firstName();
	contacts[_index].set_lastName();
	contacts[_index].set_nickName();
	contacts[_index].set_phoneNumber();
	contacts[_index].set_darkSecret();
	if (index < MAX)
		index++;
	count++;
	old_index = count % MAX;
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