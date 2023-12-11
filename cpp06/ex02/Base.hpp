/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:22:25 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/11 16:03:46 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Base__
#define __Base__

#include <iostream>
#include <cstring>
#include <cstdlib>

class Base
{
	private:
		
	public:
		virtual ~Base();
};

class ClassA : public Base {};
class ClassB : public Base {};
class ClassC : public Base {};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif