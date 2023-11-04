/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:28:50 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/02 10:41:42 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Ice : public AMateria
{ 
    public:

        Ice();
        Ice(std::string const & type);
        Ice(const Ice &copy);
        Ice &operator=(const Ice &src);
        ~Ice();

        Ice *clone() const;
        void use(ICharacter& target);
};

#endif