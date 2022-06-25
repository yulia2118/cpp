/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:11:26 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:11:28 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFFLE_HPP
# define PLASMARIFFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & src );
	virtual ~PlasmaRifle( void );

	PlasmaRifle & operator=( PlasmaRifle const & rhs );

	virtual void attack( void ) const;

};

#endif
