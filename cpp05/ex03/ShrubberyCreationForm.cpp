/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:00:15 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/29 15:05:58 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm() { setTarget("default");}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) 
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm::AForm(copy)
{
	setTarget(copy.getTarget());
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		setTarget(src.getTarget());
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	const Bureaucrat *f = &executor;
	if (!f)
		return;
	if (executor.getGrade() > getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!getIsSigned())
        throw AForm::AFormNotSignedException();
    std::string name = getTarget() + "_shrubbery";
    std::ofstream file(name.c_str());
    file << "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ...... ...";
    file.close();
}