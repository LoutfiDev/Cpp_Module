/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/26 13:08:35 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stack>


int main ()
{
	std::stack<int> v;
	v.push(5);
	v.push(4);
	v.push(3);
	v.push(2);
	v.push(1);
	// for (size_t i = 1; i <= 5; i++)
	// 	v.push_back(i);
	easyfind(v,9);
	return (0);
}