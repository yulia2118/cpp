/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Neon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:05:35 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:05:37 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEON_HPP
# define NEON_HPP

# include "Victim.hpp"

class Neon : public Victim {

protected:

	Neon( void );

public:

	Neon( std::string const & name );
	Neon( Neon const & src );
	virtual ~Neon( void );

	Neon & operator=( Neon const & rhs );

	virtual void getPolymorphed( void ) const;

};

#endif
