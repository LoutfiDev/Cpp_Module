/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:07:55 by yloutfi           #+#    #+#             */
/*   Updated: 2023/09/08 09:19:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <cstring>

class WrongAnimal
{
	protected:

		std::string type;
		
	public:
	
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal &operator=(const WrongAnimal& src);
		~WrongAnimal();


		std::string getType() const;
		void makeSound() const;
};

#endif