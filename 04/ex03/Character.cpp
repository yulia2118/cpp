/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:22:01 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:22:03 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {

	return ;

}

Character::Character( std::string const & name ) : _name(name), _slot(0) {

	return ;

}

Character::Character( Character const & src ) {

	this->_name = src.getName();
	this->_slot = src._slot;
	for (int i = 0; i < this->_slot; i++)
		this->_materias[i] = src._materias[i]->clone();

	return ;

}

void Character::clear( void ) {

	for (int i = 0; i < this->_slot; i++) {
		delete this->_materias[i];
	}
	this->_slot = 0;

	return ;

}

Character::~Character( void ) {

	this->clear();

	return ;

}

Character & Character::operator=( Character const & rhs ) {

	this->clear();
	this->_name = rhs.getName();
	this->_slot = rhs._slot;
	for (int i = 0; i < this->_slot; i++) {
		this->_materias[i] = rhs._materias[i]->clone();
	}

	return *this;

}

std::string const & Character::getName( void ) const {

	return this->_name;

}

void Character::equip( AMateria * m ) {

	if (!m || this->_slot >= 4)
		return ;
	this->_materias[this->_slot] = m;
	this->_slot++;

	return ;

}

void Character::unequip( int idx ) {

	if (idx < 0 || idx >= this->_slot)
		return ;
	for (int i = idx; i < this->_slot - 1; i++) {
		this->_materias[i] = this->_materias[i + 1];
	}
	this->_slot--;

	return ;

}

void Character::use( int idx, ICharacter & target ) {

	if (idx < 0 || idx >= this->_slot)
		return ;

	this->_materias[idx]->use(target);

	return ;

}
