/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:07:55 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 09:19:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <cstring>

class Animal
{
	protected:
	
		std::string type;
		
	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal& copy);
		Animal &operator=(const Animal& src);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif