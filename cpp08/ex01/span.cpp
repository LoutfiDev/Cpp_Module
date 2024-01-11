/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:24:39 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/21 11:34:41 by yloutfi          ###   ########.fr       */
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


void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		if (std::distance(begin, end) + v.size() > N)
			throw std::out_of_range("Span can't hold that much of elements");
		v.insert(v.begin(), begin, end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
int Span::shortestSpan()
{
	int minDis;
	if (v.size() < 2)
		throw std::invalid_argument("No span can be found");
	std::sort(v.begin(), v.end());
	std::vector<int>::iterator it = v.begin();
	minDis = *(it + 1) - *it;
	for (; it != v.end() - 1; it++)
		if (minDis > *(it + 1) - *it)
			minDis = *(it + 1) - *it;
	return (minDis);
}
int Span::longestSpan()
{
	if (v.size() < 2)
		throw std::invalid_argument("No span can be found");
	std::sort(v.begin(), v.end());
	return (v.back() - v.front());
}