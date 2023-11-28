/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:34:24 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 18:08:35 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name("default"), signGrade(150), executeGrade(150), isSigned(false) {}

Form::Form(std::string _name, int _signGrade, int _executeGrade) : name(_name), \
	signGrade(_signGrade), executeGrade(_executeGrade), isSigned(false)
{
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form& copy) : name(copy.name), signGrade(copy.signGrade), \
	executeGrade(copy.executeGrade), isSigned(copy.isSigned)
{
	(void)copy;
}
Form &Form::operator=(const Form& src)
{
	(void)src;
	return (*this);
}

Form::~Form() {}

int Form::getSignGrade() const
{
	return (signGrade);
}

int Form::getExecuteGrade() const
{
	return (executeGrade);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

std::string Form::getName() const
{
	return (name);
}

void Form::beSigned(Bureaucrat& br)
{
	Bureaucrat *f = &br;
	if (!f)
		return;
	if (isSigned)
		throw Form::AFormSignedException();
	else if (signGrade < br.getGrade())
		throw Form::GradeTooLowException();
	isSigned = true;
}
		
std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", form signGrade is " << f.getSignGrade() \
		<< " and it's executeGrade is " << f.getExecuteGrade();
	if (f.getIsSigned())
		os << " , already signed.";
	else 
		os << " , not signed yet.";

	return (os);
}
