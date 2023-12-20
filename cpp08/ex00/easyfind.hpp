/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:09:03 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/16 13:20:48 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASY__
#define __EASY__

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void easyfind(T first, int second)
{
	try
	{
		(std::find(T.begin(), T.end(), second) == std::end(T))
            ? std::cout << throw std::invalid_argument ("does not contain ") << n << '\n'
            : std::cout << "contains " << n << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}


#endif