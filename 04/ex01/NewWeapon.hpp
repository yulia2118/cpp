/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewWeapon.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:11:57 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:11:59 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWWEAPON_HPP
# define NEWWEAPON_HPP

# include "AWeapon.hpp"

class NewWeapon : public AWeapon {

public:

	NewWeapon( void );
	NewWeapon( NewWeapon const & src );
	virtual ~NewWeapon( void );

	NewWeapon & operator=( NewWeapon const & rhs );

	virtual void attack( void ) const;

};

#endif
