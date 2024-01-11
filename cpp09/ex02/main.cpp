/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:19:57 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/08 16:25:30 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void display(std::vector<double> v, const char* str)
{
	std::cout << str;
	for (int i = 0; i < 5; i++)
		std::cout << v[i] << " ";
	if (v.size() > 5)
		std::cout << "[...]";
	std::cout << std::endl;	
}

void time_span(std::vector<double>& v, std::deque<double>& d)
{
	double d_timeSpan, v_timeSpan;
	clock_t t1,t2, t3;
	display(v, "Before: ");
	display(v, "After : ");
	t1 = clock();
	PmergeMe::v_sort(v);
	t2 = clock();
	PmergeMe::d_sort(d);
	t3 = clock();
	v_timeSpan = (((double)(t2) / CLOCKS_PER_SEC) - ((double)(t1) / CLOCKS_PER_SEC)) * 1000000;
	d_timeSpan = (((double)(t3) / CLOCKS_PER_SEC) - ((double)(t2) / CLOCKS_PER_SEC)) * 1000000;
	std::cout << "Time to process a range of " << v.size()
		<< " elements with std::vector: " << v_timeSpan << " us" << std::endl;
	std::cout << "Time to process a range of " << d.size() 
		<< " elements with std::deque : " << d_timeSpan<< " us" << std::endl;
}

template<typename T>
bool is_sorted(T v)
{
	for (double i = 0; i + 1 < v.size(); i++)
	{
		if (v[i] > v[i + 1])
			return (false);
	}
	return (true);
}

void is_valid(char *av, std::vector<double>& v, std::deque<double>& d)
{
	std::string str(av);
	std::stringstream ss(str);
	std::string tmp;
	while (std::getline(ss,tmp, ' '))
	{
		std::string::iterator it = tmp.begin();
		for(; it != tmp.end(); it++)
		{
			if (!isdigit(*it))
				throw std::invalid_argument("Error");
		}
		v.push_back(atof(tmp.c_str()));
		d.push_back(atof(tmp.c_str()));
	}
}

int main(int ac, char **av)
{
	std::vector<double>v;
	std::deque<double>d;
	try
	{
		for (int i=1; i < ac; i++)
			is_valid(av[i], v, d);
		if (is_sorted(v))
			throw std::invalid_argument("Already sorted");
		time_span(v, d);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return (0);
}


// Before: 141 79 526 321 [...]
// After: 79 141 321 526 [...]
// Time to process a range of 3000 elements with std::[..] : 62.14389 us
// Time to process a range of 3000 elements with std::[..] : 69.27212 us
