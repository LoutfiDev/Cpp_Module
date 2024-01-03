/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:14 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/03 13:18:55 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME__
#define __PMERGEME__

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>


class PmergeMe
{
	private:
		PmergeMe();
	public:
		static void sort(std::string seque);
		~PmergeMe();
};




#endif