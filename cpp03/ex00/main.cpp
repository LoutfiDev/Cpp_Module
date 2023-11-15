/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:45:57 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/15 10:08:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("said");
	ClapTrap b = a;
	ClapTrap c("walid");


	b.attack("walid");
	c.takeDamage(2);
	
}