/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:13:04 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:13:06 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : Form
("RobotomyRequestForm", 72, 45), _target(target) {

	return ;

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
		Form("RobotomyRequestForm", 72, 45) {

	*this = src;

	return ;

}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	return ;

}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	Form::operator=(rhs);
	return *this;

}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!getIsSigned())
		throw Form::FormNotSignedException();
	std::srand(std::time(NULL));
	std::cout << "drrr...drrr...drr...drrrr...drr..drrrr..drrr..." << std::endl;
	std::cout << _target << (std::rand() % 2 ? " has been robotomized successfully"
	: " has not been robotomized") << std::endl;

	return ;

}
