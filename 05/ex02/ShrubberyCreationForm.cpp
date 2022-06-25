/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:13:41 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:13:43 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) :
Form("ShrubberyCreationForm", 145, 137), _target(target) {

	return ;

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
Form("ShrubberyCreationForm", 145, 137) {

	*this = src;

	return ;

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	return ;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	Form::operator=(rhs);
	return *this;

}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{

	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!getIsSigned())
		throw Form::FormNotSignedException();
	std::ofstream file;
	file.open(_target + "_shrubbery");
	if (!file)
		throw ShrubberyCreationForm::CreateFileException();
	file << "      /\\" << std::endl;
	file << "     /\\*\\" << std::endl;
	file << "    /\\O\\*\\" << std::endl;
	file << "   /*/\\/\\/\\" << std::endl;
	file << "  /\\O\\/\\*\\/\\" << std::endl;
	file << " /\\*\\/\\*\\/\\/\\" << std::endl;
	file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
	file << "      ||" << std::endl;
	file << "      ||" << std::endl;
	file.close();

	return ;

}

const char * ShrubberyCreationForm::CreateFileException::what() const throw() {

	return "No file";

}
