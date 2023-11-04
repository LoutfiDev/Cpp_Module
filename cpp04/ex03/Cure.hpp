/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:32:15 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/02 10:42:01 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:

        Cure();
        Cure(std::string const & type);
        Cure(const Cure &copy);
        Cure &operator=(const Cure &src);
        ~Cure();

        Cure *clone() const;
        void use(ICharacter& target);
};

#endif