/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:13 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/06 15:42:27 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALCONVERT__
#define __SCALCONVERT__

#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		
	public:
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter &operator=(const ScalarConverter& src);
		~ScalarConverter();

		static void convert(std::string arg);
		static void check(std::string arg);
		

		static void toChar(double nbr);
		static void toInt(double nbr);
		static void toFloat(double nbr);
		static void toDouble(double nbr);
};



#endif