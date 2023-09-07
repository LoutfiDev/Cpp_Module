/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:45:57 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/06 15:57:45 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap a("said");
	// ClapTrap b = a;
	// b.attack("WALO");
	
	// ScavTrap c("hamid");
	// ScavTrap d = c;
	// d.attack("WALO1");
	
	// FragTrap e("anas");
	// FragTrap f = e;
	// f.attack("WALO2");
	
	DiamondTrap g("anas");
	DiamondTrap h = g;
	// std::cout << h.getName() << std::endl;
	h.attack("WALO");
}