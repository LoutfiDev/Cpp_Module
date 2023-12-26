/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:16 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/24 10:46:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	std::cout << "****************************************" << std::endl;
	
	mstack.push(17);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "****************************************" << std::endl;
	
	MutantStack<int> mstack_copy(mstack);
	MutantStack<int>::reverse_iterator rit = mstack_copy.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack_copy.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}	
	
	std::cout << "****************************************" << std::endl;
	
	MutantStack<int> mstack_op;
	
	mstack_op = mstack;
	it = mstack_op.begin();
	ite = mstack_op.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "****************************************" << std::endl;
	
	std::stack<int> s(mstack);
	std::cout << "mstack top: " << mstack.top() << " | s top: " << s.top() << std::endl;
	std::cout << "mstack size: " << mstack.size() << " | s size: " << s.size() << std::endl;
	return 0;
}