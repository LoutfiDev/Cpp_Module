/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:30 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/04 17:04:04 by yloutfi          ###   ########.fr       */
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
		
		/*Comparaison opp*/
		bool operator>(const Fixed& src) const;
		bool operator<(const Fixed& src) const;
		bool operator>=(const Fixed& src) const;
		bool operator<=(const Fixed& src) const;
		bool operator==(const Fixed& src) const;
		bool operator!=(const Fixed& src) const;
		
		/*Arithmetic opp*/
		Fixed operator+(const Fixed& src);
		Fixed operator-(const Fixed& src);
		Fixed operator*(const Fixed& src);
		Fixed operator/(const Fixed& src);
		
		/*Increment/Decrement opp*/
		Fixed& operator++();    // prefix ++
  		Fixed operator++(int); // postfix ++
		Fixed& operator--();    // prefix ++
  		Fixed operator--(int); // postfix ++
		

		/*Min-Max Overload opp*/
		static Fixed &min(Fixed& src1, Fixed& src2);
		static const Fixed &min(const Fixed& src1, const Fixed& src2);
		static Fixed &max(Fixed& src1, Fixed& src2);
		static const Fixed &max(const Fixed& src1, const Fixed& src2);
		

		~Fixed();
};


std::ostream& operator<<(std::ostream& os, const Fixed& dt);


#endif