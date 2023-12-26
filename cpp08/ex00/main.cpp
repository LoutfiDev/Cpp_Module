/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/20 12:22:23 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int main ()
{
	std::vector<int> v;
	for (size_t i = 1; i <= 5; i++)
		v.push_back(i);
	easyfind(v,9);
	return (0);
}