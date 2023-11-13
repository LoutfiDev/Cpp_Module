/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:38:12 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 10:36:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombieHorde = NULL;
	int		nbrZombies = 0;
	
	zombieHorde = zombieHorde->zombieHorde(nbrZombies, "zombieHorde");
	for (int i = 0; i < nbrZombies; i++)
		zombieHorde[i].announce();
	if (zombieHorde)
		delete [] zombieHorde;	
}