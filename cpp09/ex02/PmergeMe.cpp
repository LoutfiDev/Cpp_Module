/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:04 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/08 16:25:06 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void sort_p(T &v_p, int i)
{
	if (i >= 0 && v_p[i].second > v_p[i + 1].second)
	{
		std::swap(v_p[i], v_p[i+1]);
		sort_p(v_p, i-1);
	}
}

template<typename T>
double get_pos(T v, double value)
{
	for (double i = 0; i < v.size(); i++)
	{
		if (v[i] > value)
			return (i);
	}
	return (v.size());
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::v_sort(std::vector<double>& v)
{
	bool is_odd = false;
	double last;
	std::vector<std::pair<double, double> >v_p;
	
	
	if (v.size() % 2 != 0)
	{
		is_odd = true;
		last = *(v.end() - 1);
	}
	
	for(unsigned int i = 0; i + 1 < v.size(); i += 2)
        v_p.push_back(std::make_pair(v[i], v[i+1]));
	
	for(unsigned int i = 0; i < v_p.size(); i++)
        if (v_p[i].first > v_p[i].second)
            std::swap(v_p[i].first,  v_p[i].second);
	
	for(unsigned int i = 0; i+1 < v_p.size(); i++)
            sort_p(v_p,  i);
	
	v.erase(v.begin(), v.end());
	
	for(unsigned int i = 0; i < v_p.size(); i++)
		v.push_back(v_p[i].second);	
	
	v.insert(v.begin(), v_p[0].first);
	for(unsigned int i = 1; i < v_p.size(); i++)
		v.insert(v.begin() + get_pos(v, v_p[i].first), v_p[i].first);
	
	if(is_odd)
		v.insert(v.begin() + get_pos(v, last), last);
}

void PmergeMe::d_sort(std::deque<double>& d)
{
	bool is_odd = false;
	double last;
	std::deque<std::pair<double, double> >d_p;
	
		
	if (d.size() % 2 != 0)
	{
		is_odd = true;
		last = *(d.end() - 1);
	}
	
	for(unsigned int i = 0; i + 1 < d.size(); i += 2)
        d_p.push_back(std::make_pair(d[i], d[i+1]));
	
	for(unsigned int i = 0; i < d_p.size(); i++)
        if (d_p[i].first > d_p[i].second)
            std::swap(d_p[i].first,  d_p[i].second);
	
	for(unsigned int i = 0; i+1 < d_p.size(); i++)
            sort_p(d_p,  i);
	
	d.erase(d.begin(), d.end());
	
	for(unsigned int i = 0; i < d_p.size(); i++)
		d.push_back(d_p[i].second);	
	
	d.insert(d.begin(), d_p[0].first);
	for(unsigned int i = 1; i < d_p.size(); i++)
		d.insert(d.begin() + get_pos(d, d_p[i].first), d_p[i].first);
	
	if(is_odd)
		d.insert(d.begin() + get_pos(d, last), last);
}