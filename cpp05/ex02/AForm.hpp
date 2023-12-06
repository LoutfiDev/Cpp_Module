/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:32:49 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/27 16:19:32 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__ 
#define __FORM_H__ 

#include "Bureaucrat.hpp"
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		std::string target;
		const int signGrade;
		const int executeGrade;
		bool isSigned;

	public:
	
		AForm();
		AForm(std::string _name, int _signGrade, int _executeGrade);
		AForm(const AForm& copy);
		AForm &operator=(const AForm& src);
		virtual ~AForm();
		
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool getIsSigned() const;
		std::string getName() const;
		std::string getTarget() const;

		void setTarget(const std::string _target);

		void beSigned(Bureaucrat& br);

		virtual void execute(Bureaucrat const & executor) const = 0;
		
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

		class AFormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Form not signed";
			}
		};

		
};

std::ostream& operator<<(std::ostream& os, const AForm& br);

#endif