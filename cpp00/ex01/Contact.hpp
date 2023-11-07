/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:16:10 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/24 10:51:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <cstring>

class Contact
{
	private:

		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
	
	public:

		int			index;
		void display( void ) const;	

		void set_firstName( void );
		void set_lastName( void );
		void set_nickName( void );
		void set_phoneNumber( void );
		void set_darkSecret( void );

		std::string get_firstName( void ) const;
		std::string get_lastName( void ) const;
		std::string get_nickName( void ) const;
		std::string get_phoneNumber( void ) const;
		std::string get_darkSecret( void ) const;

};

#endif
