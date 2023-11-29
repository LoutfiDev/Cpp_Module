/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:44:01 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 17:58:35 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY__ 
#define __ROBOTOMY__


#include "AForm.hpp"



class RobotomyRequestForm : public AForm
{
	private:
		/* data */
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& src);
		~RobotomyRequestForm();
		
		void execute(Bureaucrat const & executor) const;
};

#endif