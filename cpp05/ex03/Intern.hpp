/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:46:48 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/29 10:09:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__ 
#define __INTERN__


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		/* data */
	public:
		Intern();
		Intern(const Intern& copy);
		Intern &operator=(const Intern& src);
		AForm *makeForm(std::string formName, std::string target);
		AForm *getShrubberyForm(std::string target);
		AForm *getRobotomyForm(std::string target);
		AForm *getPresidentialForm(std::string target);
		~Intern();
		
	class inavilableFormExeption : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Invailabe form";
			}
	};
		
};

#endif