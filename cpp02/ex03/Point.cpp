/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:28:49 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/04 15:33:35 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float f_x, float f_y) : x(f_x), y(f_y)
{
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y)
{
}

Point &Point::operator=(const Point& src) 
{
	if (this == &src) 
		return *this;
    Point temp(src.x.toFloat(), src.y.toFloat());
    std::swap(*this, temp);
    return *this;
}

Fixed Point::getXvalue( void ) const
{
	return x;
}

Fixed Point::getYvalue( void ) const
{
	return y;
}


Point::~Point()
{
}