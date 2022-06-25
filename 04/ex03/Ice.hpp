/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:20:54 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:20:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

public:

	Ice( void );
	Ice( AMateria const & src );
	virtual ~Ice( void );

	AMateria & operator=( AMateria const & rhs );

	AMateria * clone( void ) const;
	void use( ICharacter & target );

};

#endif
