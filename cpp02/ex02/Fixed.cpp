/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:27 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 09:38:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nbr_frac = 8;

Fixed::Fixed() : f_int(0)
{
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}


Fixed::Fixed(const int nbr)
{
	f_int = nbr * (1 << nbr_frac);
}

Fixed::Fixed(const float nbr)
{
	f_int = roundf(nbr * (1 << nbr_frac));
}

Fixed &Fixed::operator=(const Fixed& src)
{
	this->f_int = src.f_int;
	return *this;
}

/***********************Comparaison**********************************/

bool Fixed::operator>(const Fixed& src) const {
	if (this->f_int > src.f_int)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& src) const {
	if (this->f_int < src.f_int)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& src) const {
	if (this->f_int >= src.f_int)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& src) const {
	if (this->f_int <= src.f_int)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& src) const {
	if (this->f_int != src.f_int)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& src) const {
	if (this->f_int == src.f_int)
		return (true);
	return (false);
}

/**********************************************************************/


/*****************************Arithmetic opp***************************/

Fixed Fixed::operator+(const Fixed& src){
	Fixed tmp;
	tmp.f_int = this->f_int + src.f_int;
	return tmp;
}

Fixed Fixed::operator-(const Fixed& src){
	Fixed tmp;
	tmp.f_int = this->f_int - src.f_int;
	return tmp;
}

Fixed Fixed::operator*(const Fixed& src){
	Fixed tmp;
	tmp.f_int = (this->f_int * src.f_int) >> this->nbr_frac;
	return tmp;
}

Fixed Fixed::operator/(const Fixed& src){
	Fixed tmp;
	tmp.f_int = (this->f_int << this->nbr_frac) / src.f_int;
	return tmp;
}


/**********************************************************************/

/*************************increment/decrement opp**********************/

Fixed& Fixed::operator++()
{
	this->f_int ++;
	return (*this);
} 

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	this->f_int ++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->f_int --;
	return (*this);
} 

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp = *this;
	this->f_int --;
	return (tmp);
}
/**********************************************************************/


/*******************************Min/Max opp****************************/
Fixed &Fixed::min(Fixed& src1, Fixed& src2) {
	if (src1 < src2)
		return (src1);
	else
		return (src2);
}

const Fixed &Fixed::min(const Fixed& src1, const Fixed& src2) {
		if (src1 < src2)
		return (src1);
	else
		return (src2);
}

Fixed &Fixed::max(Fixed& src1, Fixed& src2) {
	if (src1 > src2)
		return (src1);
	else
		return (src2);
}

const Fixed &Fixed::max(const Fixed& src1, const Fixed& src2) {
		if (src1 > src2)
		return (src1);
	else
		return (src2);
}

/**********************************************************************/


int Fixed::getRawBits( void ) const
{
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
}

