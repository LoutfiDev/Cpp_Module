/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:26:14 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/28 15:37:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::~BitcoinExchange()
{
}
void is_number(const std::string& s)
{
    int dot = 0;
    std::string::const_iterator it = s.begin();
    if ((*it == '-' || *it == '+') && *(it + 1) != '.')
        ++it;
    while (it != s.end())
    {
        if (it != s.begin() && it != s.end() - 1 && *it == '.' && !dot)
        {
            dot++;
            ++it;
        }
        if (!std::isdigit(*it))
            break;
        ++it;
    }
    if (s.empty() || it != s.end())
        throw 1;
    if (atof(s.c_str()) > 1000)
        throw 2;
    if (atof(s.c_str()) < 0)
        throw 3;
}

bool is_date(const std::string& s)
{
	struct tm tm;
	if (s.length() != 11 && !strptime(s.c_str() + 1, "%Y-%m-%d", &tm) && atoi(s.substr(1, 4).c_str()) < 2009)
		return false;
	return true;
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

		if (i)
		{
			try
			{
				if(tmp.find(" | ") == std::string::npos || !is_date(key))
					throw 1;
				key.erase(key.find(" "), 1);
				value.erase(value.find(" "), 1);
				is_number(value);
				std::multimap<std::string, std::string>::const_iterator it = data.find(key);
				if (it != data.end())
					std::cout << key << " => " << value << " = " << atof(value.c_str()) * atof(it->second.c_str()) << std::endl;
				else
				{
					it = data.lower_bound(key);
					--it;
					std::cout << key << " => " << value << " = " << atof(value.c_str()) * atof(it->second.c_str()) << std::endl;
				}
			}
			catch(const int e)
			{
				if (e == 1)
				std::cout << "Error: bad input => " << tmp << std::endl;
				else if (e == 2)
					std::cout << "Error: too large number" << std::endl;
				else if (e == 3)
					std::cout << "Error: not a positive number" << std::endl;
			}
			
		}
		i++;
	}
	inputFile.close();
	dataFile.close();
}