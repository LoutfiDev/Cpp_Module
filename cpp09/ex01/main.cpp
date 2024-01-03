/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:26:31 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/03 09:26:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac == 2)
	{
		std::string mathExpress = av[1];
		RPN::calc(mathExpress);
	}
	else 
		std::cout << av[0] << \
			" accept 1 param (inverted Polish mathematical expression) only!" <<std::endl; 
}        