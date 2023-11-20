/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:48:31 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/19 10:14:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap param constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap& src)
{
	ClapTrap::operator=(src);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints && energyPoints)
	{
		std::cout << "ScavTrap " << name\
			<< " attacks " << target << ", causing " << attackDamage \
			<< " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " cannot attak!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name \
			<< " is now in Gate keeper mode."<< std::endl;
}