/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:36:38 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 21:42:15 by yloutfi          ###   ########.fr       */
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

void Bureaucrat::signForm(AForm& f)
{
	AForm *form = &f;
	if (!form)
		return ;
	if (grade <= f.getSignGrade())
	{
		std::cout << getName() << " signed " << f.getName() << std::endl; 
		f.beSigned(*this);
	}
	else
	{
		std::cout << getName() << " couldn't sign " << f.getName() << " because "; 
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	const AForm *f = &form;
	if (!f)
		return;
	if (grade <= form.getExecuteGrade())
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl; 
	}
	else
	{
		std::cout << getName() << " couldn't execute " << form.getName() << " because "; 
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br)
{
	os << br.getName() << ", bureaucrat grade " << br.getGrade();
	return (os);
}
