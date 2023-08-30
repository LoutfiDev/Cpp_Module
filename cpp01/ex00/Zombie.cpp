/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:39:13 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 14:27:54 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string	name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
	if (name == "Foo")
		std::cout << name;
	else 
		std::cout << "<" << name << ">";
	std::cout <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

