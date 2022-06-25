/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:05:35 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:05:37 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {

protected:

	Peon( void );

public:

	Peon( std::string const & name );
	Peon( Peon const & src );
	virtual ~Peon( void );

	Peon & operator=( Peon const & rhs );

	virtual void getPolymorphed( void ) const;

};

#endif
