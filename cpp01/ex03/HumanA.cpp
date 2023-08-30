/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:19:07 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/29 11:21:08 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string _name, Weapon& _weapon) : name(_name), weapon(_weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
	std::cout << name << " attack with thier " << weapon.getType() << std::endl;
}