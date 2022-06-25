/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:09:20 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:09:21 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {

	return ;

}

Bureaucrat::Bureaucrat( const std::string & name, int grade ) : _name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;

	return ;

}

Bureaucrat::Bureaucrat( Bureaucrat const & src) {

	*this = src;

	return ;

}

Bureaucrat::~Bureaucrat( void ) {

	return ;

}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {

	this->_grade = rhs._grade;

	return *this;

}

std::string const & Bureaucrat::getName( void ) const {

	return this->_name;

}

int Bureaucrat::getGrade( void ) const {

	return this->_grade;

}

void Bureaucrat::incrementGrade( void ) {

	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;

	return ;

}

void Bureaucrat::decrementGrade( void ) {

	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;

	return ;

}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

	return " has an error: grade is too high!";

}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return " has an error: grade is too low!";

}

std::ostream & operator<<( std::ostream & o, const Bureaucrat & bureaucrat ) {

	o << "Grade of " << bureaucrat.getName() << " is " << bureaucrat.getGrade();

	return o;

}

void Bureaucrat::signForm( Form & form ) const {

	try {
		form.beSigned(*this);
		std::cout << getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << getName() << " cannot sign " << form.getName() <<
		" because " << e.what() << std::endl;
	}

	return ;

}

void Bureaucrat::executeForm( Form const & form ) const {

	try {
		form.execute(*this);
		std::cout << getName() << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << getName() << " can't execute " << form.getName() <<
		" because " << e.what() << std::endl;
	}

	return ;

}
