/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:14:22 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/26 11:38:03 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Contact.hpp"


class PhoneBook
{
	private:
		int index = -1;
		int old_index = 0;
		Contact contacts[8];
	public:
		void set_contact(PhoneBook *phonebook);
		void get_contact(PhoneBook phonebook);
		void display(PhoneBook phonebook);
};



