/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:21:41 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 11:36:05 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type)
{
	std::cout << "Cat param constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& src)
{
	Animal::operator=(src);
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}