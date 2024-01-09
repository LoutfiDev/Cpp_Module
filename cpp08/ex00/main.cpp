/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/09 12:13:27 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int main ()
{
	try
	{
		std::vector<int> v;
		for (size_t i = 1; i <= 5; i++)
			v.push_back(i);
		easyfind(v,9);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}