/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:19:54 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/22 15:16:01 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
			inventory[i] = NULL;
	head = NULL;
}

Character::Character(std::string const & name) : Name(name)
{
	for (int i = 0; i < 4; i++)
			inventory[i] = NULL;
	head = NULL;
}

Character::Character(const Character& copy)
{
   *this = copy;
}

Character &Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	Name = src.Name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;;
		}
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
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
	deleteList(head);
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
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
	if (!head)
		head = create(m);
	else
		insert(head ,m);
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && inventory[idx] != NULL)
	{
		if (!head)
			head = create(inventory[idx]);
		else
			insert(head ,inventory[idx]);
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	ICharacter *test = &target;
	if (!test)
		return;
	if ((idx >= 0 && idx <= 3) && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

node *Character::create (AMateria *m)
{
	node *ptr = new node;
    ptr->addr = m;
    ptr->next = NULL;
    return ptr;
}

node *Character::insert (node *head, AMateria *m)
{
    node *ptr1;
	
    ptr1 = head;
	while (ptr1)
	{
		if (ptr1->addr == m)
			return (head);
		ptr1 = ptr1->next;
	}
	
    ptr1 = head;
    while(ptr1->next != NULL)
        ptr1 = ptr1->next;
    ptr1->next = create(m);
	
    return head;
}

void Character::deleteList (node *head)
{
	node *tmp;

	while(head)
	{
		tmp = head;
		head = head->next;
		delete tmp->addr;
		delete tmp;
	}
}