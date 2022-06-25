/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:22:37 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:22:39 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {

	return ;

}

AMateria::AMateria( std::string const & type ) : _type(type), _xp(0) {

	return ;

}

AMateria::AMateria( AMateria const & src ) {

	*this = src;

	return ;

}

AMateria::~AMateria( void ) {

	return ;

}

AMateria & AMateria::operator=( AMateria const & rhs ) {

	this->_type = rhs._type;
	this->_xp = rhs._xp;

	return *this;

}

std::string const & AMateria::getType( void ) const {

	return this->_type;

}

unsigned int AMateria::getXP( void ) const {

	return this->_xp;

}

void AMateria::use( ICharacter & target ) {

	(void)target;
	this->_xp += 10;

	return ;

}
