/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsLoser.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:01:18 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/29 14:55:27 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SEDISLOSER_H__
#define __SEDISLOSER_H__

#include <iostream>
#include <cstring>
#include <fstream>

class Sed
{
	private:
		std::string 	fileName;
		std::string		s1;
		std::string		s2;
		
	public:
	
		Sed(std::string _file, std::string _s1, std::string _s2);
		void execute (void);
		~Sed();
};


#endif