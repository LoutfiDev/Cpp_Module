/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:08:08 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/09 11:08:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	
	Data s = {4};
	
	uintptr_t res = Serializer::serialize(&s);
	Data *_s = Serializer::deserialize(res);
	
	if (&s == _s)
		std::cout << "works !" << std::endl;
	return (0);
}