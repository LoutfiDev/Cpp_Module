/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 11:36:40 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	ScavTrap::name ="default_clap_name";
	ScavTrap::energyPoints = 50;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name), ScavTrap(_name), \
	FragTrap(_name), name(_name)
{
	ScavTrap::name = _name + "_clap_name";
	ScavTrap::energyPoints = 50;
	std::cout << "DiamondTrap param constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), \
	FragTrap(copy)
{
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& src)
{
	ScavTrap::operator=(src);
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
	std::cout << name << " | " << ScavTrap::name << std::endl;
}