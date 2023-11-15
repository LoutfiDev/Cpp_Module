/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:45:57 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 11:03:17 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("said");
	ClapTrap b = a;
	b.attack("rachid");
	
	std::cout << "**************************" << std::endl;
	
	ScavTrap c("hamid");
	ScavTrap d = c;
	d.guardGate();
	d.attack("rachid");
	
	std::cout << "**************************" << std::endl;
	
	FragTrap e("anas");
	FragTrap f = e;
	f.highFivesGuys();
	f.attack("rachid");
	
	std::cout << "**************************" << std::endl;
}