/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:45:05 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 21:05:46 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm() { setTarget("default");}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) 
{
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm::AForm(copy)
{
	setTarget(copy.getTarget());
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		setTarget(src.getTarget());
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	const Bureaucrat *f = &executor; 
	if (!f)
		return;
	if (executor.getGrade() > getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!getIsSigned())
        throw AForm::AFormNotSignedException();
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}