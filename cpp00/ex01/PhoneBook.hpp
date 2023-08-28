/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:14:22 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 10:09:41 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Contact.hpp"


class PhoneBook
{
	private:
	
		int 	index = -1;
		int 	old_index = 0;
		Contact contacts[8];
		
	public:
	
		void 	set_contact( void );
		void 	get_contact( void ) const;
		void 	display( void ) const;
};

#endif


