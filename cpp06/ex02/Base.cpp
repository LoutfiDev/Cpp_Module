/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:21:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/10 15:53:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"


Base::~Base()
{
}


Base *generate(void)
{

	srand((unsigned) time(NULL));
	int random = 1 + (rand() % 3);
	switch (random)
	{
		case 1:
			return ((Base *)(new ClassA()));
			break;
		case 2:
			return ((Base *)(new ClassB()));
			break;
		case 3:
			return ((Base *)(new ClassC()));
			break;
		default:
			break;
	}
	return (NULL);
}

void identify(Base* p)
{
	(void)p;
	std::cout << "generate" << std::endl;
}

void identify(Base& p)
{
	(void)p;
	std::cout << "generate" << std::endl;
}