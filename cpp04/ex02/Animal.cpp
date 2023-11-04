/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:17:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 11:20:59 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "param constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& src)
{
	type = src.type;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "????" << std::endl;
}