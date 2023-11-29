/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:34:24 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/27 17:16:30 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : name("default"), signGrade(150), executeGrade(150), isSigned(false) {}

AForm::AForm(std::string _name, int _signGrade, int _executeGrade) : name(_name), \
	signGrade(_signGrade), executeGrade(_executeGrade), isSigned(false)
{
	if (_signGrade < 1 || _executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : name(copy.name), signGrade(copy.signGrade), \
	executeGrade(copy.executeGrade), isSigned(copy.isSigned)
{
	isSigned = copy.getIsSigned();
}
AForm &AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		isSigned = src.getIsSigned();
		target = src.getTarget();
	}
	return (*this);
}

AForm::~AForm() {}

int AForm::getSignGrade() const
{
	return (signGrade);
}

int AForm::getExecuteGrade() const
{
	return (executeGrade);
}

bool AForm::getIsSigned() const
{
	return (isSigned);
}

std::string AForm::getName() const
{
	return (name);
}

std::string AForm::getTarget() const
{
	return (target);
}

void AForm::beSigned(Bureaucrat& br)
{
	Bureaucrat *f = &br;
	if (!f)
		return;
	if (isSigned)
		throw AForm::AFormSignedException();
	else if (signGrade < br.getGrade())
		throw AForm::GradeTooLowException();
	isSigned = true;
}

void AForm::setTarget(const std::string _target)
{
	target = _target;
}
	
std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << f.getName() << ", form signGrade is " << f.getSignGrade() \
		<< " and it's executeGrade is " << f.getExecuteGrade();
	if (f.getIsSigned())
		os << " , already signed.";
	else 
		os << " , not signed yet.";

	return (os);
}
