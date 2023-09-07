/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:44:05 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/06 16:50:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FragTrap_H__
#define __FragTrap_H__

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class FragTrap :virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap& copy);
		FragTrap &operator=(const FragTrap& src);
		~FragTrap();
		
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif