/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:27 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/30 12:10:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	Harl harl;
	if (ac == 2)
	{
		void (Harl::* ptr) (std::string) = &Harl::complain;
		(harl.*ptr) (std::string(av[1]));
	}
	else
		std::cout << "Error: harlFilter: accept only one argument" << std::endl;
	return(0);
}