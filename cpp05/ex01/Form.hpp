/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:32:49 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 18:08:28 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__ 
#define __FORM_H__ 

#include "Bureaucrat.hpp"
#include <iostream>
#include <cstring>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const int signGrade;
		const int executeGrade;
		bool isSigned;
	public:
	
		Form();
		Form(std::string _name, int _signGrade, int _executeGrade);
		Form(const Form& copy);
		Form &operator=(const Form& src);
		~Form();
		
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool getIsSigned() const;
		std::string getName() const;
		void beSigned(Bureaucrat& br);
		
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Form grade is to high";
			}
		};
		
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Form grade is too low";
			}
		};
		
		class AFormSignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Form already signed";
			}
		};

		
};

std::ostream& operator<<(std::ostream& os, const Form& br);

#endif