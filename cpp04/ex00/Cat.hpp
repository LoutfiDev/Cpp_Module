/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:24:25 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/20 10:09:52 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		
	public:
	
		Cat();
		Cat(std::string type);
		Cat(const Cat& copy);
		Cat &operator=(const Cat& src);
		~Cat();
		
		void makeSound() const;
};

#endif