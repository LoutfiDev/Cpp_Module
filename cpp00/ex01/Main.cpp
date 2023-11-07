/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/05 10:45:05 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int get_value(const std::string& buff)
{
	if (buff.compare("ADD") == 0)
		return (0);
	else if (buff.compare("SEARCH") == 0)
		return (1);
	else if (buff.compare("EXIT") == 0)
		return (2);
	else
		return (3);
}

int main()
{
	PhoneBook phonebook;
	std::string buff;
	std::cout << "********|PhoneBook|***********" << std::endl;
	while (1)
	{
		while (1)
		{
			std::cout << "entre a choice: ";
			std::getline(std::cin, buff);
			if (std::cin.eof())
				exit (0);
			if (!buff.empty())
				break;
		}
		int value = get_value(buff);
		switch (value)
		{
			case 0:
				phonebook.set_contact();
				break;
			case 1:
				phonebook.get_contact();
				break;
			case 2:
				return (0);
				break;
			default:
				std::cout << "Error: invalid choice: " << buff << std::endl;
				std::cout << "Hint: valid choices: ADD/SEARCH/EXIT" << std::endl;
				break;
		}
	}
	return(0);
}