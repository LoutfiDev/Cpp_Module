/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:02 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/29 10:24:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) { *this = copy; }

Intern &Intern::operator=(const Intern& src) { (void)src; return (*this); }

Intern::~Intern() {}

AForm *Intern::getShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::getRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::getPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string str[4] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm *(Intern::* ptr[4]) (std::string) = {&Intern::getRobotomyForm, &Intern::getShrubberyForm, &Intern::getPresidentialForm};
	
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == formName)
			return ((this->*(ptr[i]))(target));
	}
	throw Intern::inavilableFormExeption();
}