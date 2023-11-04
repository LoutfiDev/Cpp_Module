/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:51:04 by yloutfi           #+#    #+#             */
/*   Updated: 2023/10/31 10:57:43 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <cstring>

class Brain
{
	private:
		
	public:
	
		std::string ideas[100];
		Brain();
		Brain(const Brain& copy);
		Brain &operator=(const Brain& src);
		~Brain();
};

#endif