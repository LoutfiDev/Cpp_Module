/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:44:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 11:00:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap param constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
}

FragTrap &FragTrap::operator=(const FragTrap& src)
{
	ClapTrap::operator=(src);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints && energyPoints)
	{
		std::cout << "FragTrap " << name\
			<< " attacks " << target << ", causing " << attackDamage \
			<< " points of damage!" << std::endl;
		energyPoints--;
	}
		
	else
		std::cout << "FragTrap " << name << " cannot attak!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name \
			<< " says: high fives guys."<< std::endl;
}