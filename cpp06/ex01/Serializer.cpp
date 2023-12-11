/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:17:41 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/09 10:50:13 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& copy)
{
	(void)copy;
}

Serializer &Serializer::operator=(const Serializer& src)
{
	(void)src;
	return (*this);
}
		
Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr); 
	return (res);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* res = reinterpret_cast<Data *>(raw);
	return (res);
}