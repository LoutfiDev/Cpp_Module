/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:19:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/29 11:57:34 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string _name) : name(_name) ,weapon(NULL)
{
}

HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon& _weapon)
{
	Weapon& tmp = _weapon;
	weapon = &tmp;
}
void HumanB::attack( void )
{
	if (weapon == NULL)
		std::cout << name << " attack with no weapon" << std::endl;
	else
		std::cout << name << " attack with thier " << weapon->getType() << std::endl;
}