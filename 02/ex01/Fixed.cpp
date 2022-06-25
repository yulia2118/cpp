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

Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const num ) {

	std::cout << "Int constructor called" << std::endl;
	this->_value = num << _bits;

	return;
}

Fixed::Fixed( float const num ) {

	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(num * (1 << _bits));

	return;
}

Fixed::Fixed( Fixed const & cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;

	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed	&Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & fix ) {

	o << fix.toFloat();

	return o;
}

int	Fixed::toInt( void ) const {

	return (this->_value >> this->_bits);
}

float	Fixed::toFloat( void ) const {

	return (float)this->_value / (1 << this->_bits);
}

int Fixed::getRawBits( void ) const {

	return this->_value;
}

void Fixed::setRawBits( int const raw ) {

	this->_value = raw;

	return;
}
