/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:11:03 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:11:06 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string const _name;
	int const _gradeToSign;
	int const _gradeToExecute;
	bool _isSigned;

	Form( void );

	void static checkGrade( int grade );

public:

	Form( std::string const & name, int const gradeToSign, int const
	gradeToExecute );
	Form( Form const & src );
	virtual ~Form( void );

	Form & operator=( Form const & rhs);

	std::string const & getName( void ) const;
	int getGradeToSign( void ) const;
	int getGradeToExecute( void ) const;
	bool getIsSigned( void ) const;
	void beSigned( Bureaucrat const & bureaucrat );
	virtual void execute( Bureaucrat const & executor ) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};

	class AlreadySignedException : public std::exception {
	public:
		const char * what() const throw();
	};

	class FormNotSignedException : public std::exception {
	public:
		const char * what() const throw();
	};


};

std::ostream & operator<<( std::ostream & o, Form const & form );

#endif
