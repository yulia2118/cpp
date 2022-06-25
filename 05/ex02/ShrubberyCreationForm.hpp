/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:13:28 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:13:30 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:

	std::string const _target;

	ShrubberyCreationForm( void );

public:

	ShrubberyCreationForm( std::string const target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm( void );

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs);

	virtual void execute( Bureaucrat const & executor ) const;

	class CreateFileException : public std::exception {
		const char * what() const throw();
	};

};


#endif
