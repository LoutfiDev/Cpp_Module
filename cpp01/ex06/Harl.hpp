/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:14:56 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/13 15:35:59 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>
#include <cstring>

class Harl
{
	private:
		
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
	public:
		
		Harl();
		~Harl();
		void complain( std::string level );
};

#endif