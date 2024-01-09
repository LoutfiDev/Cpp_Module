/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:04:42 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/09 11:56:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
#define __ITER__

#include <iostream>

template <typename T>
void increment(T &x)
{
	x++;
}

template <typename T>
void show(T &x)
{
	std::cout << x << std::endl;
}

template<typename T, typename LEN, typename T2>
void iter(T *array, LEN length, void (*f)(T2& x))
{
	if (!array || !f)
        return ;
	for (LEN i = 0; i < length; i++)
    	f(array[i]);
}
#endif