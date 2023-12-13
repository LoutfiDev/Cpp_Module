/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:17:58 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/13 09:51:59 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIAL__
#define __SERIAL__

#include <iostream>
#include <cstring>
#include <stdint.h>

struct  Data
{
	int data;
};

class Serializer
{
	private:
		Serializer();
		
	public:
		Serializer(const Serializer& copy);
		Serializer &operator=(const Serializer& src);
		~Serializer();
		
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif