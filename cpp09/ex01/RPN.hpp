/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:26:37 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/03 09:26:38 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN__
#define __RPN__

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>

class RPN 
{
    private :
        RPN();
    public :
        RPN(const RPN &copy);
        RPN& operator=(const RPN& src);
        ~RPN();
        static void calc (std::string mathExpress);
};

#endif