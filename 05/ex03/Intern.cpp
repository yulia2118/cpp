/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:14:46 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:14:48 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {

	return ;

}

Intern::~Intern( void ) {

	return ;

}

Intern::Intern( const Intern & src ) {

	*this = src;

	return ;

}

Intern & Intern::operator=( const Intern & rhs ) {

	(void)rhs;

	return *this;

}

Form * Intern::newShrubbery( std::string target ) {

	return (new ShrubberyCreationForm(target));

}

Form * Intern::newRobotomy( std::string target ) {

	return (new RobotomyRequestForm(target));

}

Form * Intern::newPresidential( std::string target ) {

	return (new PresidentialPardonForm(target));

}

Form * Intern::makeForm( std::string name, std::string target ) {

	std::string names[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};
	Form * (Intern:: * forms[3])(std::string target) = {
			& Intern::newShrubbery,
			& Intern::newRobotomy,
			& Intern::newPresidential
	};
	int i = 0;
	while (i < 3) {
		if (name == names[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return (this->*forms[i])(target);
		}
		i++;
	}
	std::cout << "Requested form is not known" <<std::endl;

	return 0;

}
