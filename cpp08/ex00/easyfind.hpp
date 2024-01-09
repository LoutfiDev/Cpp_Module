/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:09:03 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/09 12:13:10 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASY__
#define __EASY__

#include <iostream>
#include <algorithm>
#include <exception>


template<typename T>
void easyfind(T first, int second)
{
	(std::find(first.begin(), first.end(), second) != first.end())
		? std::cout << "contains " << second << '\n'
		: throw std::invalid_argument("does not contain");
}


#endif