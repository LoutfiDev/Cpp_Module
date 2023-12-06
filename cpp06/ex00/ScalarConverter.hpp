/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:13 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/05 11:48:13 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALCONVERT__
#define __SCALCONVERT__

#include <iostream>
#include <cstring>

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
		static void toInt(int i);
		static void toDouble(double d);
		static void toFloat(float f);
};



#endif