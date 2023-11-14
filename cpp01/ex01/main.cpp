/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:38:12 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/14 14:33:17 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z = NULL;
	int		nbrZombies = 2;
	
	z = zombieHorde(nbrZombies, "zombieHorde");
	for (int i = 0; i < nbrZombies; i++)
		z[i].announce();
	if (z)
		delete [] z;	
}