/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:23:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/28 10:02:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{	
	if (ac == 2)
	{
		std::string fileName = av[1];
		BitcoinExchange::exchange(fileName);
	}
	else 
		std::cout << av[0] << \
			" accept 1 param (fileName) only!" <<std::endl; 
	return (0);
}