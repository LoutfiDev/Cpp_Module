/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:21:59 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/11 15:59:11 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

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
			return (new ClassA);
			break;
		case 2:
			return (new ClassB);
			break;
		case 3:
			return (new ClassC);
			break;
		default:
			break;
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<ClassA *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<ClassB *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<ClassC *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void identify(Base& p)
{
	try
	{
		try
		{
			ClassA &A = dynamic_cast<ClassA&>(p);
			std::cout << "A" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				ClassB &B = dynamic_cast<ClassB&>(p);
				std::cout << "B" << std::endl;
			}
			catch(const std::exception& e)
			{
				ClassC &C = dynamic_cast<ClassC&>(p);
				std::cout << "C" << std::endl;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "std::_bad_cast" << std::endl;
	}
	
}