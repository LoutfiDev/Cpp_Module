/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsLoser.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:01:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/14 14:34:17 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsLoser.hpp"

Sed::Sed(std::string _fileName, std::string _s1, std::string _s2)
	: fileName(_fileName), s1(_s1), s2(_s2)
{
}

Sed::~Sed()
{
}

void Sed::execute (void)
{
	std::ifstream 	myFile(fileName.c_str());
	fileName = fileName.append(".replace");
	std::ofstream 	myFileCopy(fileName.c_str());
	std::string		tmp;
	std::size_t 	pos;
	
	if (!myFile.is_open() || !myFileCopy.is_open())
	{
		std::cout << "Error: open failed" << std::endl;
		return ;
	}
	while (1)
	{
		pos = 0;
		std::getline(myFile, tmp);
		while (1) 
		{
			pos = tmp.find(s1, pos);
			if (pos == std::string::npos)
					break;
			tmp.erase (pos, s1.length());
			tmp.insert (pos, s2);
			pos += s2.length();
		}
		myFileCopy << tmp << std::endl;
		if (myFile.eof())
			break;
	}
	myFile.close();
	myFileCopy.close();
}
