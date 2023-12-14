/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:33:29 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/13 16:04:31 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
	int a[] = {1, 2, 3, 4};
	unsigned int len = sizeof(a) / sizeof(a[0]);
	iter(a, len, increment);
	iter(a, len, show);
	return (0);
}