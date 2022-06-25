/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:18:55 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 19:18:57 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & cpy ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;

	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed	& Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_value;
}

void Fixed::setRawBits( int const raw ) {

	this->_value = raw;

	return;
}
