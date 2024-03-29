/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:46:21 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/19 10:15:06 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), \
	energyPoints(10), attackDamage(0)
{
	std::cout << "param constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints && energyPoints)
	{
		std::cout << "ClapTrap " << name\
			<< " attacks " << target << ", causing " << attackDamage \
			<< " points of damage!" << std::endl;
		energyPoints--;
	}
		
	else
		std::cout << "ClapTrap " << name << " cannot attak!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > (int)amount && (int)amount > 0)
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name\
			<< " lose " << amount << " hit points" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << name\
		<< " can't take this damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{	
	if (energyPoints)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name\
			<< " gets " << amount << " hit points back" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name\
			<< " have no energy!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}