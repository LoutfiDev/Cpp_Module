/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:27 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/14 10:48:55 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nbr_frac = 8;

Fixed::Fixed() : f_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	f_int = nbr * (1 << nbr_frac);
	std::cout << "construction of a is: " << f_int << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	f_int = roundf(nbr * (1 << nbr_frac));
	std::cout << "construction of a is: " << f_int << std::endl;

}
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->f_int = src.f_int;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (f_int);
}

void Fixed::setRawBits( int const raw )
{
	f_int = raw;
}

int Fixed::toInt( void ) const
{
	int res = f_int / (1 << nbr_frac);
	return (res);
}

float Fixed::toFloat( void ) const
{
	float res = (float)f_int / (1 << nbr_frac);
	return (res);
}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
    os << dt.toFloat();
    return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}