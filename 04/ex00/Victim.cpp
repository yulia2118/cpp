/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:07:27 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:07:28 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void ) {

	return ;

}

Victim::Victim( std::string const & name ) : _name(name) {

	std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;

	return ;

}

Victim::Victim( Victim const & src ) {

	*this = src;

	return ;

}

Victim::~Victim( void ) {

	std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;

	return ;

}

Victim & Victim::operator=( Victim const & rhs ) {

	this->_name = rhs._name;

	return *this;

}

std::string const & Victim::getName( void ) const {

	return this->_name;

}

void Victim::getPolymorphed( void ) const {

	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;

	return ;

}

std::ostream & operator<<( std::ostream & o, Victim const & victim ) {

	o << "I am " << victim.getName() << ", and I like otters!" << std::endl;

	return o;

}
