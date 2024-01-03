/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:26:42 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/03 12:24:05 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::~RPN () {}

bool isOperator(int c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (1);
    return (0);
}

void getValue(double &first, double &second, std::stack<double> &s)
{
    second = s.top();
    s.pop();
    first = s.top();
    s.pop();
}

void RPN::calc(std::string mathExpress)
{
    std::stack<double>s;
    double first, second;
    std::string tmp;
    std::stringstream ss(mathExpress);
    
    try
    {
        while(std::getline(ss,tmp,' '))
        {
            if (tmp.length() != 1 || (!isdigit(tmp[0]) && !isOperator(tmp[0])))
                throw std::invalid_argument("Error: Invalid expression");
            if (isdigit(tmp[0]))
                s.push(atof(tmp.c_str()));
            else if (tmp[0] == '+' && s.size() >= 2)
            {
                getValue(first, second, s);
                s.push(first + second);
            }
            else if (tmp[0] == '-' && s.size() >= 2)
            {
                getValue(first, second, s);
                s.push(first - second);
            }
            else if (tmp[0] == '*' && s.size() >= 2)
            {
                getValue(first, second, s);
                s.push(first * second);
            }
            else if (tmp[0] == '/' && s.size() >= 2)
            {
                getValue(first, second, s);
                s.push(first / second);
            }
            else
                throw std::invalid_argument("Error: Invalid expression");
        
        }
        if (s.size() != 1)
            throw std::invalid_argument("Error: Invalid expression");
        else
            std::cout << s.top() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
        std::cout << "Hint :" << '\n' 
                << "space between operands and operators are mandatory" << '\n' 
                << "for example :" << '\n'
                << "{ \"8 9 + 1 -\" = 8 + 9 - 1 }";
    }
}