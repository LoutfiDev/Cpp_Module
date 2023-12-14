/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:33:29 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/14 15:53:32 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
	Array<int> x(13);
	try {
     x[0] = 45;
     x[1] = 2435;
     std::cout << x[0] << std::endl;
     std::cout << x[1] << std::endl;
     x[13] = 84;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}