/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:30:49 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 10:35:16 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (0);
	Zombie* zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].name = name;
	return (zombieHorde);
}	