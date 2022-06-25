/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:09:34 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:09:36 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {

private:

	std::string	_name;
	int	_apcost;
	int	_damage;

protected:

	AWeapon( void );

public:

	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & src );
	virtual ~AWeapon( void );

	AWeapon & operator=( AWeapon const & rhs );

	std::string const & getName( void ) const;
	int getAPCost( void ) const;
	int getDamage( void ) const;
	virtual void attack( void ) const = 0;

};

#endif
