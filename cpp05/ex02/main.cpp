/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:37:02 by yloutfi           #+#    #+#             */
/*   Updated: 2023/11/29 10:43:13 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	AForm *f = NULL;
	try
	{
		Bureaucrat br("said", 26);
		f = new RobotomyRequestForm("form");
		std::cout << *f << std::endl;
		br.signForm(*f);
		br.executeForm(*f);
		// f->beSigned(br);
		// f->execute(br);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete f;
	return (0);
}