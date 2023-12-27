/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:26:14 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/26 13:21:08 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::exchange (std::string fileName)
{
	std::ifstream 	inputFile(fileName.c_str());
	std::ifstream 	dataFile("data.csv");
	std::string tmp;
	
	if (!inputFile.is_open())
	{
		std::cout << "Error: opening inputFile failed" << std::endl;
		return ;
	}
	if (!dataFile.is_open())
	{
		std::cout << "Error: opening dataFile failed" << std::endl;
		return ;
	}
	while (1)
	{
		std::getline(inputFile, tmp);
		std::cout << tmp << std::endl;
		if (inputFile.eof())
			break;
	}
	while (1)
	{
		std::getline(dataFile,tmp);
		if (inputFile.eof())
			break;
	}
	inputFile.close();
	dataFile.close();
}