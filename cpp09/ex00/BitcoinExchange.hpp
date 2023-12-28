/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:25:21 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/27 12:54:08 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BIT__
#define __BIT__

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <sstream>
#include <map>


class BitcoinExchange
{
	private:
		BitcoinExchange();
		
	public:
		~BitcoinExchange();
		static void exchange(std::string fileName);
};



#endif