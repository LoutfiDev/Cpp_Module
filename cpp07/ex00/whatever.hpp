/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:33:46 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/13 13:02:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANY__
#define __ANY__

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
   T tmp;
   tmp = x;
   x = y;
   y = tmp;
}

template<typename T>
T max(T x, T y)
{
	if (x == y)
		return (y);
    return (x < y) ? y : x;
}

template<typename T>
T min(T x, T y)
{
	if (x == y)
		return (y);
    return (x > y) ? y : x;
}
#endif