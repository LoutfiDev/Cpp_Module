/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:16:20 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 11:33:53 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include <cstring>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:
		
	public:
	
		Dog();
		Dog(std::string type);
		Dog(const Dog& copy);
		Dog &operator=(const Dog& src);
		~Dog();
		
		void makeSound() const;
};

#endif