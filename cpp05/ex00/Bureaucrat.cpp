/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:36:38 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/27 16:16:07 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = _grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
		grade = src.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}


int Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

void Bureaucrat::incrementGrade()
{
	grade--;
	if (grade < 1 || grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	grade++;
	if (grade < 1 || grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br)
{
	os << br.getName() << ", bureaucrat grade " << br.getGrade();
	return (os);
}
