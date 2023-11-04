/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:24:48 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/04 21:29:55 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = copy.inventory[i]->clone();
		}
		else
			inventory[i] = copy.inventory[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = src.inventory[i]->clone();
		}
		else
			inventory[i] = src.inventory[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m->clone();
			break;		
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			if (inventory[i]->getType().compare(type) == 0)
				return (inventory[i]->clone());
		}
	}
	return (0);
}
