/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:19:36 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/29 11:31:15 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include <cstring>
#include "Weapon.hpp"


class HumanB
{
	private:
		std::string 	name;
		Weapon* 		weapon;
		
		
	public:
	
		HumanB(std::string _name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack( void );
		
};


#endif