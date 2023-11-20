/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:24:25 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/20 10:09:52 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		
	public:
	
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat& copy);
		WrongCat &operator=(const WrongCat& src);
		~WrongCat();
		
		void makeSound() const;
};

#endif