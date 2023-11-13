/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:18:17 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 12:08:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <cstring>

class Weapon
{
	private:
		std::string	type;

	
	public:
		const std::string& getType( void );
		void setType( std::string _type );
		Weapon( std::string _type );
		~Weapon();
		Weapon( void );
};

#endif