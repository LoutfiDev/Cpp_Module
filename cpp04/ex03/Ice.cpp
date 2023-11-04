/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:03:53 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/03 17:48:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
}

Ice &Ice::operator=(const Ice& src)
{
	AMateria::operator=(src);
	return *this;
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
    Ice *ice = new Ice();
    return (ice);
}
        
Ice::~Ice()
{
}