/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:45:36 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 17:58:39 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL__ 
#define __PRESIDENTIAL__


#include "AForm.hpp"



class PresidentialPardonForm : public AForm
{
	private:
		/* data */
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& src);
		~PresidentialPardonForm();
		
		void execute(Bureaucrat const & executor) const;
};

#endif