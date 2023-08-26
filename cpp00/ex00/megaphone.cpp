/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:25:50 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/23 12:25:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		for(int i = 1; av[i]; i++)
			for(int j = 0; j < (int)strlen(av[i]); j++)
				std::cout << (char) toupper(av[i][j]);
	}
	std::cout << std::endl;
    return (0);
}