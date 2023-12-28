/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:26:14 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/27 15:51:42 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::exchange (std::string fileName)
{
	std::multimap<std::string, std::string> data;
	std::ifstream 	inputFile(fileName.c_str());
	std::ifstream 	dataFile("data.csv");
	std::string tmp;
	
	if (!dataFile.is_open())
	{
		std::cout << "Error: opening dataFile failed" << std::endl;
		return ;
	}
	
	if (!inputFile.is_open())
	{
		std::cout << "Error: opening inputFile failed" << std::endl;
		return ;
	}
	
	int i = 0;
	while (std::getline(dataFile,tmp))
	{
		std::string key;
		std::string value;
		std::stringstream ss(tmp);
		std::getline(ss,key,',');
		std::getline(ss,value,',');
		if (i)
			data.insert(std::pair<std::string, std::string>(key, value));
		i++;
	}
	i = 0;
	while (std::getline(inputFile, tmp))
	{
		std::string key;
		std::string value;
		std::stringstream ss(tmp);
		std::getline(ss,key,'|');
		std::getline(ss,value,'|');
		std::cout << key << ":" << value << std::endl;
		if (i)
		{
			if(key.find(" ") != std::string::npos)
				key.erase(key.find(" "));
			if(value.find(" ") != std::string::npos)
				value.erase(value.find(" "));
			std::cout << key << ":" << value << std::endl;
		}
		i++;
	}
	
	inputFile.close();
	dataFile.close();
}