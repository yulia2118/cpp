/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:10:31 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:10:33 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void ) {

	return ;

}

Enemy::Enemy( int hp, std::string const & type ) : _type(type), _hp(hp) {

	return ;

}

Enemy::Enemy(Enemy const & src) {

	*this = src;

	return ;
}

Enemy::~Enemy( void ) {

	return ;

}

Enemy & Enemy::operator=( Enemy const & rhs ) {

	this->_type = rhs._type;
	this->_hp = rhs._hp;

	return *this;

}

std::string const & Enemy::getType( void ) const {

	return this->_type;

}

int Enemy::getHP( void ) const {

	return this->_hp;

}

void Enemy::takeDamage( int damage ) {

	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;

	return ;

}
