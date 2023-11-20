/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:21:41 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/20 12:38:26 by yloutfi          ###   ########.fr       */
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
	*(brain) = *(copy.brain);
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& src)
{
	Animal::operator=(src);
	*(brain) = *(src.brain);
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