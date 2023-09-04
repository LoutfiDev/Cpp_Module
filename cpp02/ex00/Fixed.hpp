/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:30 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/31 14:35:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cstring>


class Fixed
{
	private:
	
		int 				f_int;
		static const int	nbr_frac;
		
	public:
	
		Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed& src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};


#endif