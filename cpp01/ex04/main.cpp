/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:00:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/30 09:48:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsLoser.hpp"


int main (int ac, char **av)
{	
	if (ac == 4)
	{
		std::string fileName = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		Sed obj(fileName, s1, s2);
		obj.execute();
	}
	else 
		std::cout << av[0] << \
			" only accept 3 params (fileName/ string1/ string2)" <<std::endl; 
	
	return (0);
}