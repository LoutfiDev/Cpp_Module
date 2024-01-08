/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:14 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/08 14:59:43 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME__
#define __PMERGEME__

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <exception>


class PmergeMe
{
	private:
		PmergeMe();
	public:
		static void v_sort(std::vector<double>& v);
		static void d_sort(std::deque<double>& d);
		~PmergeMe();
};




#endif