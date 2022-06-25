/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:21:26 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:21:27 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

public:

	Cure( void );
	Cure( AMateria const & src );
	virtual ~Cure( void );

	AMateria & operator=( AMateria const & rhs );

	AMateria * clone( void ) const;
	void use( ICharacter & target );

};

#endif
