/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:28:45 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 09:42:55 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>
#include "Fixed.hpp"

class Point
{
	private:
	
		Fixed const x;
		Fixed const y;
		
	public:
	

		Point();
		Point(float f_x, float f_y);
		Point(const Point& copy);
		Point &operator=(const Point& src);
		Fixed getXvalue( void ) const;
		Fixed getYvalue( void ) const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif