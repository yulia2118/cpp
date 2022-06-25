/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:14:31 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:14:33 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {

public:

	Intern( void );
	Intern( Intern const & src );
	~Intern( void );

	Intern & operator=( Intern const & rhs );

	Form * makeForm( std::string name, std::string target );
	Form * newShrubbery( std::string target );
	Form * newRobotomy( std::string target );
	Form * newPresidential( std::string target );

};

#endif
