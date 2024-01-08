/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:19:57 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/03 13:31:50 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	PmergeMe::v_sort(v);
	PmergeMe::d_sort(d);
	return (0);
}