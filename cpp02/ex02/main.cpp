/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:07 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/04 11:25:29 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


int main( void ) 
{
	Fixed a (0);

	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const b( Fixed( 5.05f ) + Fixed( 2 ) );
	// Fixed const b( Fixed( 5.05f ) - Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << b << std::endl;
	
	// std::cout << "a > b is " << (a > b) << std::endl;
	// std::cout << "a >= b is " << (a >= b) << std::endl;
	// std::cout << "a < b is " << (a < b) << std::endl;
	// std::cout << "a <= b is " << (a <= b) << std::endl;
	// std::cout << "a != b is " << (a != b) << std::endl;
	// std::cout << "a == b is " << (a == b) << std::endl;
	

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	
	return 0;
}