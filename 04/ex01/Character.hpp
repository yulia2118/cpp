/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:10:06 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:10:08 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:

	std::string _name;
	int _AP;
	AWeapon *_weapon;

	Character( void );

public:

	Character( std::string const & name );
	Character( Character const & src );
	~Character( void );

	Character & operator=( Character const & rhs );

	void recoverAP( void );
	void equip( AWeapon * weapon );
	void attack( Enemy * enemy );
	std::string const & getName( void ) const;
	int getAP( void ) const;
	AWeapon * getWeapon( void ) const;

};

std::ostream & operator<<( std::ostream & o, Character const & character );

#endif
