/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:19:11 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:19:12 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

public:

	TacticalMarine( void );
	TacticalMarine( ISpaceMarine const & src );
	~TacticalMarine( void );

	ISpaceMarine & operator=( ISpaceMarine const & rhs );

	ISpaceMarine * clone( void ) const;
	void battleCry( void ) const;
	void rangedAttack( void ) const;
	void meleeAttack( void ) const;

};

#endif
