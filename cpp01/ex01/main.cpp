/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:38:12 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 14:51:13 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	Zombie foo("Foo");
	Zombie *bar;
	Zombie *zombieHorde;
	

	bar = bar->newZombie("bar");
	bar->announce();
	zombie1.announce();
	foo.announce();
	zombieHorde = zombieHorde->zombieHorde(10, "zombieHorde");
	for (int i = 0; i < 10; i++)
		zombieHorde[i].announce();
	delete [] zombieHorde;
	delete bar;
}