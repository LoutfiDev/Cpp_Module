/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:38:12 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 14:18:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	Zombie foo("Foo");
	Zombie *bar;
	

	bar = bar->newZombie("bar");
	bar->announce();
	zombie1.announce();
	foo.announce();
	delete bar;
}