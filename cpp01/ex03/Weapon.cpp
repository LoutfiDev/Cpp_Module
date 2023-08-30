/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:18:33 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 17:05:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{
}
Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType( void )
{
	return type;
}

void Weapon::setType( std::string _type )
{
	type = _type;
}