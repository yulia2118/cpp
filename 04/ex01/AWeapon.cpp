/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:09:25 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:09:26 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void ) {

	return ;

}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name
(name), _apcost(apcost), _damage(damage) {

	return ;

}

AWeapon::AWeapon( AWeapon const & src ) {

	*this = src;

	return ;

}

AWeapon::~AWeapon( void ) {

	return ;

}

AWeapon & AWeapon::operator=( AWeapon const & rhs ) {

	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;

	return *this;

}

std::string const & AWeapon::getName( void ) const {

	return this->_name;

}

int AWeapon::getAPCost( void ) const {

	return this->_apcost;

}

int AWeapon::getDamage( void ) const {

	return this->_damage;

}
