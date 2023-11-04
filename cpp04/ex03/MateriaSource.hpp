/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:27:04 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/03 17:49:49 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <iostream>
#include <cstring>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	
	private :
    
        AMateria *inventory[4];
		
	public:
	
		MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &src);
		~MateriaSource();
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif