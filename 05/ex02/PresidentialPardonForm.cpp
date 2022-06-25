/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:12:26 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:12:28 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) :
Form("PresidentialPardonForm", 25, 5), _target(target) {

	return ;

}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
		Form("PresidentialPardonForm", 25, 5) {

	*this = src;

	return ;

}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	return ;

}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	Form::operator=(rhs);
	return *this;

}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!getIsSigned())
		throw Form::FormNotSignedException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" <<
	std::endl;

	return ;

}
