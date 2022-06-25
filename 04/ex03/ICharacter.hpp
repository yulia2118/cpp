/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:23:12 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:23:22 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"

class ICharacter {

public:

	virtual ~ICharacter( void ) {}

	virtual std::string const & getName( void ) const = 0;

	virtual void equip( AMateria * m ) = 0;
	virtual void unequip( int idx ) = 0;
	virtual void use( int idx, ICharacter & target ) = 0;

};

#endif
