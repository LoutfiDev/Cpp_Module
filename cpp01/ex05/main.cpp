/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:27 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/30 11:58:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void test_harl(std::string level)
{
	Harl harl;
	void (Harl::* ptr) (std::string) = &Harl::complain;
	(harl.*ptr) (level);
}

int main()
{
	test_harl("DEBUG");
	test_harl("INFO");
	test_harl("WARNING");
	test_harl("ERROR");
	test_harl("blabla");
	test_harl("");
	return(0);
}