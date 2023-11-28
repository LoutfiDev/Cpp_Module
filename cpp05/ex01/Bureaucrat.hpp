/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:35:29 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/27 19:23:57 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__ 
#define __BUREAUCRAT_H__ 

#include <iostream>
#include <cstring>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		const std::string name;
		int grade;
		
	public:
	
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat &operator=(const Bureaucrat& src);
		~Bureaucrat();
		
		int getGrade() const;
		std::string getName() const;
		
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &f);
		
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Bureaucrat grade is to high";
			}
		};
		
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Bureaucrat grade is too low";
			}
		};

		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif