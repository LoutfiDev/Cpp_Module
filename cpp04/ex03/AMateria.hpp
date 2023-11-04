/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:07:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/04 10:05:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include <cstring>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        
        std::string materia;
        
    public:

        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &src);
        virtual ~AMateria();
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
