/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:10:53 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:10:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string const & name, const int gradeToSign, int const
gradeToExecute ) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute
		(gradeToExecute), _isSigned(false) {

	checkGrade(this->_gradeToSign);
	checkGrade(this->_gradeToExecute);

	return ;

}

Form::Form( Form const & src ) : _name(src._name),
								 _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {

	*this = src;

	return ;

}

Form::~Form( void ) {

	return ;

}

Form & Form::operator=( Form const & rhs ) {

	_isSigned = rhs._isSigned;

	return *this;

}

void Form::checkGrade( int grade ) {

	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();

	return ;

}

std::string const & Form::getName( void ) const {

	return _name;

}

int Form::getGradeToSign( void ) const {

	return _gradeToSign;

}

int Form::getGradeToExecute( void ) const {

	return _gradeToExecute;

}

bool Form::getIsSigned( void ) const {

	return _isSigned;

}

void Form::beSigned( Bureaucrat const & bureaucrat ) {

	if (this->_isSigned)
		throw Form::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;

	return ;

}

const char * Form::GradeTooHighException::what() const throw() {

	return "Grade too high for form";

}

const char * Form::GradeTooLowException::what() const throw() {

	return "Grade too low for form";

}

std::ostream & operator<<( std::ostream & o, Form const & form ) {

	o << form.getName() << " is " << (form.getIsSigned() ? "" : "not ") <<
	  "signed. Grade to sign " << form.getGradeToSign() << ". Grade to execute "
	  << form.getGradeToExecute() << std::endl;

	return o;

}

const char * Form::FormNotSignedException::what() const throw() {

	return "Form is not signed";

}

const char *Form::AlreadySignedException::what() const throw() {

	return "Form has been already signed";

}
