/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:08:48 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:08:50 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat jim("Jim", 2);
	Bureaucrat joe("Joe", 40);
	Intern someRandomIntern;
	Form * rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form * ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	Form * scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	Form * bad;
	bad = someRandomIntern.makeForm("Unknown", "Bender");
	std::cout << *ppf << *rrf << *scf;
	jim.executeForm(*rrf);
	jim.signForm(*rrf);
	std::cout << *rrf;
	jim.executeForm(*rrf);
	joe.signForm(*ppf);
	jim.signForm(*ppf);
	jim.executeForm(*ppf);
	joe.executeForm(*ppf);
	jim.signForm(*scf);
	jim.executeForm(*scf);

	delete rrf;
	delete ppf;
	delete scf;

	return (0);
}
