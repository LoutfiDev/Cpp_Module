/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:19:54 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/04 10:02:42 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
			inventory[i] = NULL;
}

Character::Character(std::string const & name) : Name(name)
{
	for (int i = 0; i < 4; i++)
			inventory[i] = NULL;
}

Character::Character(const Character& copy)
{
    *this = copy;
}

Character &Character::operator=(const Character& src)
{
	Name = src.Name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = src.inventory[i];
		}
		else
			inventory[i] = src.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;		
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx <= 3) && inventory[idx] != NULL)
		inventory[idx]->use(target);
}