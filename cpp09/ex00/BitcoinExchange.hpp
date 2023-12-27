/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:25:21 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/26 11:05:16 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BIT__
#define __BIT__

#include <iostream>
#include <cstring>
#include <fstream>
#include <map>


class BitcoinExchange
{
	private:
		BitcoinExchange();
		std::map<std::string, double> data;
		std::map<std::string, double> input;
		
	public:
		~BitcoinExchange();
		static void exchange(std::string fileName);
};



#endif