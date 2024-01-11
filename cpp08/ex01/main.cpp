/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/09 14:25:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	/****************************/
	
	try
	{
		std::vector<int> T(3);
		std::vector<int>::iterator it = T.begin();
		for(int i = 1; it != T.end(); it++, i++)
			*it = i;
		Span sp = Span(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(9);
		sp.addNumber(T.begin(), T.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	/****************************/
	
	// try
	// {
	// 	Span sp = Span(5);
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
		
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// 	sp.addNumber(20);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	return 0;
}