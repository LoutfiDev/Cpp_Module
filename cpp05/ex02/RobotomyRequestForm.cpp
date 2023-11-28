/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:42:58 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/28 18:05:43 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm() { setTarget("default");}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) 
{
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm::AForm(copy)
{
	setTarget(copy.getTarget());
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		setTarget(src.getTarget());
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	const Bureaucrat *f = &executor;
	if (!f)
		return;
	srand(time(NULL));
    int a = rand() % 2;
    if (executor.getGrade() > getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!getIsSigned())
        throw AForm::AFormNotSignedException();
    if (a)
        std::cout << getTarget() << " has been robotomized." << std::endl;
    else
        std::cout << "the robotomy failed." << std::endl;
}