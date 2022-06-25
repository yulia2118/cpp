/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:06:43 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:06:45 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {

	return ;

}

Sorcerer::Sorcerer( std::string const & name, std::string const & title ) :
_name(name), _title(title) {

	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;

	return ;

}

Sorcerer::Sorcerer( Sorcerer const & src ) {

	*this = src;

	return ;

}

Sorcerer::~Sorcerer( void ) {

	std::cout << this->getName() << ", " << this->_title <<
	", is dead. Consequences will never be the same!" << std::endl;

	return ;

}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs ) {

	this->_name = rhs._name;
	this->_title = rhs._title;

	return *this;

}

std::string Sorcerer::getName( void ) const {

	return this->_name;

}

std::string Sorcerer::getTitle( void ) const {

	return this->_title;

}

void Sorcerer::polymorph( Victim const & victim ) {

	victim.getPolymorphed();

	return ;

}

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorcerer ) {

	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() <<
	", and I like ponies!" << std::endl;

	return o;

}

