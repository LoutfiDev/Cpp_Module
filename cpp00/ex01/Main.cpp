/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 09:14:07 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

enum class MyEnum {
    ADD,
    SEARCH,
    EXIT,
	DEFAULT
};

MyEnum get_value(const std::string& buff)
{
	if (buff == "ADD")
		return (MyEnum::ADD);
	else if (buff == "SEARCH")
		return (MyEnum::SEARCH);
	else if (buff == "EXIT")
		return (MyEnum::EXIT);
	else
		return (MyEnum::DEFAULT);
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
		MyEnum value = get_value(buff);
		switch (value)
		{
			case MyEnum::ADD:
				phonebook.set_contact();
				break;
			case MyEnum::SEARCH:
				phonebook.get_contact();
				break;
			case MyEnum::EXIT:
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