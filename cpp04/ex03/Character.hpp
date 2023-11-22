/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:16:42 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/22 11:40:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <iostream>
#include <cstring>
#include "ICharacter.hpp"


class AMateria;
// class ICharacter;

typedef struct node{
    AMateria *addr;
    node* next;
}node;

class Character : public ICharacter
{
    private :
    
        std::string Name;
        AMateria *inventory[4];
        node *head;

    public:

        Character();
        Character(std::string const & name);
        Character(const Character &copy);
        Character &operator=(const Character& src);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        node *create (AMateria *m);
        node * insert (node *head, AMateria *m);
        void deleteList (node *head);
};

#endif