/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:12:54 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:12:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:

	std::string const _target;

	RobotomyRequestForm( void );

public:

	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

	virtual void execute( Bureaucrat const & executor ) const;

};


#endif
