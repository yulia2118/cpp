/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:12:14 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:12:17 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:

	std::string const _target;

	PresidentialPardonForm( void );

public:

	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs);

	virtual void execute( Bureaucrat const & executor ) const;

};

#endif
