/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:25:04 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/20 15:42:59 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;

	public:
		Span();
		Span(unsigned int nbr);
		Span(const Span& copy);
		Span &operator=(const Span& src);
		~Span();
		
		void addNumber(int);
		int shortestSpan();
		int longestSpan();
};

#endif