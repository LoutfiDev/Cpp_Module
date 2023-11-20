/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:58:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/18 12:10:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	energyPoints = 50;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name") ,ScavTrap(_name + "_clap_name"), \
	FragTrap(_name + "_clap_name"), name(_name)
{
	energyPoints = 50;
	std::cout << "DiamondTrap param constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), \
	FragTrap(copy)
{
	name = copy.name;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& src)
{
	ScavTrap::operator=(src);
	FragTrap::operator=(src);
	name = src.name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->name << " | " << ClapTrap::name << std::endl;
}