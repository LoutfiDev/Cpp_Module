/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:14:22 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/09 16:06:01 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include "Contact.hpp"
#define MAX 8

class PhoneBook
{
	private:
	
		int 	index;
		int		count;
		int 	old_index;
		Contact contacts[MAX];
		
	public:
	
		PhoneBook();
		~PhoneBook();
		void 	set_contact( void );
		void 	get_contact( void ) const;
		void 	display( void ) const;
};

#endif


