/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:18:21 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:18:24 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:

	AssaultTerminator( void );
	AssaultTerminator( ISpaceMarine const & src );
	~AssaultTerminator( void );

	ISpaceMarine & operator=( ISpaceMarine const & rhs );

	ISpaceMarine * clone( void ) const;
	void battleCry( void ) const;
	void rangedAttack( void ) const;
	void meleeAttack( void ) const;

};

#endif
