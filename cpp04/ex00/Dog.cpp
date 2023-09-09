/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:18:09 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 11:35:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type)
{
	std::cout << "Dog param constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& src)
{
	Animal::operator=(src);
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}