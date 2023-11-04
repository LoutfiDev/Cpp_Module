/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:18:09 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/01 09:27:07 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type)
{
	brain = new Brain();
	std::cout << "Dog param constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& src)
{
	Animal::operator=(src);
	for(int i =0; i < 100; i++)
		brain->ideas[i] = src.brain->ideas[i];
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}