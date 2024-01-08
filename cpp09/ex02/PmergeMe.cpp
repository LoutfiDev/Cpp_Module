/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:04 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/08 13:23:13 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
void sort_p(std::vector<std::pair<double, double> >&v_p, int i)
{
	if (i >= 0 && v_p[i].second > v_p[i + 1].second)
	{
		std::swap(v_p[i], v_p[i+1]);
		sort_p(v_p, i-1);
	}
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::v_sort(std::vector<double>v)
{
	std::vector<std::pair<double, double> >v_p;
	
	for(unsigned int i = 0; i + 1 < v.size(); i += 2)
        v_p.push_back(std::make_pair(v[i], v[i+1]));
	
	for(unsigned int i = 0; i < v_p.size(); i++)
        if (v_p[i].first > v_p[i].second)
            std::swap(v_p[i].first,  v_p[i].second);
	
	for(unsigned int i = 0; i+1 < v_p.size(); i++)
            sort_p(v_p,  i);
	
}

void PmergeMe::d_sort(std::deque<double>d)
{
	(void)d;
}