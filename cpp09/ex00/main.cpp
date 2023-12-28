/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:23:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/27 13:01:43 by yloutfi          ###   ########.fr       */
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


// int main ()
// {	
// 	std::map<std::string, std::string>m;
// 	std::string key = "1";
// 	std::string value = "hello";
	
// 	m.insert(std::pair<std::string, std::string>(key, value));
// 	std::map<std::string, std::string>::iterator itr;
//     for (itr = m.begin(); itr != m.end(); ++itr) 
//     {
//         std::cout << itr->first << " : " << itr->second << std::endl;
//     }
// 	return (0);
// }