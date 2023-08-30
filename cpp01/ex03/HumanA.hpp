/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:18:48 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/29 11:21:21 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include <cstring>
#include "Weapon.hpp"


class HumanA
{
	private:
		std::string 	name;
		Weapon&	 		weapon;
		
		
	public:
	
		HumanA(std::string _name, Weapon& _weapon);
		~HumanA();
		void attack( void );
		
};


#endif