/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:21:41 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/01 09:27:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type)
{
	brain = new Brain();
	std::cout << "Cat param constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& src)
{
	Animal::operator=(src);
	for(int i =0; i < 100; i++)
		brain->ideas[i] = src.brain->ideas[i];
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}