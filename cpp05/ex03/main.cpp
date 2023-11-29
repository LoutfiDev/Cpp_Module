/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:37:02 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/29 10:40:40 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	AForm* rrf = NULL;
	try
	{
		Bureaucrat br("said", 26);
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		br.signForm(*rrf);
		br.executeForm(*rrf);
		// rrf->beSigned(br);
		// rrf->execute(br);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete rrf;
	return (0);
}