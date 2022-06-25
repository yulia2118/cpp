/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:16:50 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:16:52 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad {

public:

	virtual ~ISquad( void ) {}

	virtual int getCount( void ) const = 0;
	virtual ISpaceMarine * getUnit( int index ) const = 0;
	virtual int push( ISpaceMarine * marine ) = 0;

};

#endif
