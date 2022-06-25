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

int main()
{

	Bureaucrat jim("Jim", 2);
	Bureaucrat joe("Joe", 40);
	PresidentialPardonForm presidential("Trump");
	RobotomyRequestForm robotomy("Alice");
	ShrubberyCreationForm shrubbery("home");

	std::cout << presidential << robotomy << shrubbery;
	joe.signForm(presidential);
	jim.signForm(presidential);
	std::cout << presidential;
	jim.executeForm(presidential);
	joe.signForm(robotomy);
	std::cout << robotomy;
	joe.executeForm(robotomy);
	joe.signForm(shrubbery);
	joe.executeForm(shrubbery);

	return (0);

}
