/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:30 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/14 19:07:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>

class Fixed
{
	private:
	
		int 				f_int;
		static const int	nbr_frac;
		
	public:
	
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed& src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
};


std::ostream& operator<<(std::ostream& os, const Fixed& dt);


#endif