/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:38:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/11 15:50:40 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <cstring>

class Zombie
{
	private:
		std::string	name;
		
	public:
		
		Zombie();
		Zombie(std::string name);
		void announce();
		~Zombie();
		Zombie* zombieHorde( int N, std::string name );
};

#endif