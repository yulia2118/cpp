/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:07:18 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:07:19 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

protected:

	std::string	_name;

	Victim( void );

public:

	Victim( std::string const & name );
	Victim( Victim const & src );
	virtual ~Victim( void );

	Victim & operator=( Victim const & rhs );

	std::string const & getName( void ) const;
	virtual void getPolymorphed( void ) const;

};

std::ostream & operator<<( std::ostream & o, Victim const & victim );

#endif
