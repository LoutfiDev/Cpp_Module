/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:07:28 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/21 11:46:32 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : materia("default")
{
}

AMateria::AMateria(std::string const & type) : materia(type)
{
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria& src)
{
	(void) src;
	return *this;
}

std::string const & AMateria::getType() const
{
    return materia;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
        
AMateria::~AMateria()
{
}