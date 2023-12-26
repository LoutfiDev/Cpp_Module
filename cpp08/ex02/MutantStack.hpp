/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:37:54 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/23 15:53:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MSTACK__
#define __MSTACK__

#include <iostream>
#include <algorithm>
#include <stack>


template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack <T, Container >
{
	private :
		
	public :
		MutantStack() {}
		MutantStack(const MutantStack<T>& copy) : std::stack<T, Container>(copy) {}
		MutantStack &operator=(const MutantStack<T>& src)
		{
			if (this != &src)
				std::stack<T, Container>::operator=(src);
			return (*this);
		}
		~MutantStack() {}
		
		
		typedef typename Container::iterator iterator;
		iterator begin( void ) { return this->c.begin(); }
		iterator end( void ) { return this->c.end(); }
	
		typedef typename Container::reverse_iterator reverse_iterator;
		reverse_iterator rbegin( void ) { return this->c.rbegin(); }
		reverse_iterator rend( void ) { return this->c.rend(); }
};

#endif