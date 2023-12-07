/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:35:29 by yloutfi           #+#    #+#             */
/*   Updated: 2023/12/06 11:33:04 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__ 
#define __BUREAUCRAT_H__ 

#include <iostream>
#include <cstring>

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
		
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Grade is to high";
			}
		};
		
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Grade is too low";
			}
		};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif