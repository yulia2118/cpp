/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:09:29 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:09:32 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {

private:

	std::string const _name;
	int _grade;

	Bureaucrat( void );

public:

	Bureaucrat( std::string const & name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat & operator=( Bureaucrat const & rhs );

	std::string const & getName( void ) const;
	int getGrade( void ) const;
	void incrementGrade( void );
	void decrementGrade( void );

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw();
	};

};

std::ostream & operator<<( std::ostream & o, const Bureaucrat & bureaucrat );

#endif
