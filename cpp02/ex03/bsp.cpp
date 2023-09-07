/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:29:07 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/05 10:41:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Let the coordinates of the three corners be (x1, y1), (x2, y2), and (x3, y3).
// And coordinates of the given point P be (x, y)

// 1-Calculate the area of the given triangle, i.e., the area of the triangle ABC
// in the above diagram. 
// Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2 

// 2-Calculate the area of the triangle PAB. We can use the same formula for this.
// Let this area be A1.
 
// 3-Calculate the area of the triangle PBC. Let this area be A2. 

// 4-Calculate the area of the triangle PAC. Let this area be A3. 

// = If P lies inside the triangle, then A1 + A2 + A3 must be equal to A. 

Fixed area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	Fixed a = ((x1 * y2) - (x1 * y3));
	Fixed b = ((x2 * y3) - (x2 * y1));
	Fixed c = ((x3 * y1) - (x3 * y2));
	Fixed _area = (( a + b + c ) / 2);
	if (_area < 0)
		return ((_area) * -1);
  	return (_area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a.getXvalue(), a.getYvalue(), b.getXvalue(), b.getYvalue() 
			, c.getXvalue(), c.getYvalue());
	Fixed A1 = area(point.getXvalue(), point.getYvalue(), a.getXvalue(), a.getYvalue() 
			, b.getXvalue(), b.getYvalue());
	Fixed A2 = area(point.getXvalue(), point.getYvalue(), b.getXvalue(), b.getYvalue() 
			, c.getXvalue(), c.getYvalue());
	Fixed A3 = area(point.getXvalue(), point.getYvalue(), a.getXvalue(), a.getYvalue() 
			, c.getXvalue(), c.getYvalue());

	if (((A1 + A2 + A3) == A) && A1.toInt() && A2.toInt() && A3.toInt())
		return (true);
	else
		return (false);
}
