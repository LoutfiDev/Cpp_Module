/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:24:39 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/20 16:04:29 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span()
{
}

Span::Span(unsigned int nbr) : N(nbr)
{
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span &Span::operator=(const Span& src)
{
	if (this != &src)
	{
		N = src.N;
		v = src.v;
	}
	return (*this);
}

Span::~Span()
{
}


void Span::addNumber(int nbr)
{
	try
	{
		if (v.size() == N)
			throw std::out_of_range("Span is full");
		v.push_back(nbr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
int Span::shortestSpan()
{
	int minDis;
	try
	{
		std::vector<int>::const_iterator it;
		std::vector<int>::const_iterator it2;
		if (v.size() <= 1)
			throw std::invalid_argument("No span can be found");
		for (it = v.begin(); it != v.end(); it++)
		{
			for (it2 = v.begin(); it2 != v.end(); it2++)
			{
				if (minDis > std::min(*it, *it2)  && std::min(*it, *it2) >= 0 && it != it2)
					minDis = std::min(*it, *it2);	
			}
			std::cout << "*************************" << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (minDis);
}
int Span::longestSpan()
{
	int maxDis = 0;
	try
	{
		std::vector<int>::const_iterator it;
		std::vector<int>::const_iterator it2;
		if (v.size() <= 1)
			throw std::invalid_argument("No span can be found");
		for (it = v.begin(); it != v.end(); it++)
		{
			for (it2 = v.begin(); it2 != v.end(); it2++)
			{
				if (maxDis > std::max(*it, *it2)  && std::max(*it, *it2) >= 0 && it != it2)
					maxDis = std::max(*it, *it2);	
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (maxDis);
}