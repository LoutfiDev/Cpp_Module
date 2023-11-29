/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:03:26 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 17:58:30 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERRY__ 
#define __SHRUBBERRY__


#include "AForm.hpp"



class ShrubberyCreationForm : public AForm
{
	private:
		/* data */
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& src);
		~ShrubberyCreationForm();
		
		void execute(Bureaucrat const & executor) const;
};

#endif