/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:09:56 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:09:58 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {

	return ;

}

Character::Character( std::string const & name ) : _name(name), _AP(40),
_weapon(NULL) {

	return ;

}

Character::Character( Character const & src ) {

	*this = src;

	return ;

}

Character::~Character( void ) {

	return ;

}

Character & Character::operator=( Character const & rhs ) {

	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;

	return *this;

}

void Character::recoverAP( void ) {

	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;

	return ;

}

void Character::equip( AWeapon * weapon ) {

	this->_weapon = weapon;

	return ;

}

void Character::attack( Enemy * enemy ) {

	if (!this->_weapon)
		return ;
	else if (this->_AP < this->_weapon->getAPCost())
		return ;
	else {
		std::cout << this->_name << " attacks " << enemy->getType() <<
		" with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		this->_AP -= this->_weapon->getAPCost();
		enemy->takeDamage(this->getWeapon()->getDamage());
		if (enemy->getHP() == 0)
			delete(enemy);
	}

	return ;

}

std::string const & Character::getName( void ) const {

	return this->_name;

}

int Character::getAP( void ) const {

	return this->_AP;

}

AWeapon *Character::getWeapon( void ) const {

	return this->_weapon;

}

std::ostream & operator<<( std::ostream & o, Character const & character ) {

	if (character.getWeapon())
		std::cout << character.getName() << " has " << character.getAP() <<
		" AP and " << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		std::cout << character.getName() << " has " << character.getAP() <<
		" AP and " << "is unarmed" << std::endl;

	return o;

}
