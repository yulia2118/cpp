/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:11:57 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:11:59 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist( void );
	PowerFist( PowerFist const & src );
	virtual ~PowerFist( void );

	PowerFist & operator=( PowerFist const & rhs );

	virtual void attack( void ) const;

};

#endif
