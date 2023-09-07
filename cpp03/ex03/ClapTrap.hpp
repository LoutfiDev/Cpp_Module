/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:46:11 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/06 10:46:38 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap_H__
#define __ClapTrap_H__

#include <iostream>
#include <cstring>


class ClapTrap
{
	private:
		
		std::string name;
		int 		hitPoints; 
		int 		energyPoints; 
		int 		attackDamage; 
		
	public:
	
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap& src);
		~ClapTrap();
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string getName ( void );
		void setName ( std::string _name );
		
		int getHitPoints ( void );
		void setHitPoints ( unsigned int _hitPoints );
		
		int getEnergyPoints ( void );
		void setEnergyPoints ( unsigned int _energyPoints );
		
		int getAttakDamage ( void );
		void setAttackDamage ( unsigned int _attackDamage );

};





#endif