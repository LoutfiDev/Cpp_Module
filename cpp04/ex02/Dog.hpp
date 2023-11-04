/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:16:20 by yloutfi           #+#    #+#             */
/*   Updated: 2023/10/31 11:43:28 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
		
	public:
	
		Dog();
		Dog(std::string type);
		Dog(const Dog& copy);
		Dog &operator=(const Dog& src);
		~Dog();
		
		void makeSound() const;
};

#endif