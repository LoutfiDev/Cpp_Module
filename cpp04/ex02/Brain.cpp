/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:52:14 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/22 16:10:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain& src)
{
	if (this == &src)
		return (*this);
	for(int i =0; i < 100; i++)
		ideas[i] = src.ideas[i];
	std::cout << "Brain Copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}