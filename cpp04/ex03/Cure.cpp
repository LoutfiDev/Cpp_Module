/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:21:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/22 15:09:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const & type) : AMateria(type)
{
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
}

Cure &Cure::operator=(const Cure& src)
{
	AMateria::operator=(src);
	return *this;
}


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
    Cure *cure = new Cure();
    return (cure);
}
        
Cure::~Cure()
{
}