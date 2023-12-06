/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:13 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/06 11:18:01 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALCONVERT__
#define __SCALCONVERT__

#include <iostream>
#include <iomanip>
#include <climits>
#include <cstring>
#include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter();
		
	public:
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter &operator=(const ScalarConverter& src);
		~ScalarConverter();

		static void convert(std::string arg);
		static void toChar(char c);
		static void toInt(float i);
		static void toDouble(double d);
		static void toFloat(float f);
};



#endif