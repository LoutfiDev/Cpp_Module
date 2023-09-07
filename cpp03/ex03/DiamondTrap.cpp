/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/06 16:49:20 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	setName("default_clap_name");
	setEnergyPoints(50);
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name), ScavTrap(_name), \
	FragTrap(_name), name(_name)
{
	setName(_name + "_clap_name");
	setEnergyPoints(50);
	std::cout << "DiamondTrap param constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), \
	FragTrap(copy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& src)
{
	ClapTrap::operator=(src);
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << name << " | " << getName() << std::endl;
}