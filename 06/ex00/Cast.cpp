/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast( void ) {

	return ;

}

Cast::Cast( std::string const value ) {

	this->_value = value;

	return ;

}

Cast::Cast( Cast const & src ) {

	*this = src;

	return;

}

Cast::~Cast( void ) {

	return ;

}

Cast & Cast::operator=( Cast const & rhs ) {

	this->_value = rhs._value;

	return *this;

}

Cast::operator char( void ) const {

	try {
		if (_value.length() == 1 && !isdigit(_value[0]))
			return _value[0];
		int i = std::stoi(_value);
		char c = static_cast<char>(i);
		return c;
	}
	catch (std::exception & e) {
		throw CastException();
	}

}

Cast::operator int( void ) const {

	try {
		if (_value.length() == 1 && !isdigit(_value[0]))
			return _value[0];
		int i = std::stoi(_value);
		return i;
	}
	catch (std::exception & e) {
		throw CastException();
	}

}

Cast::operator float( void ) const {

	try {
		if (_value.length() == 1 && !isdigit(_value[0]))
			return _value[0];
		float f = std::stof(_value);
		return f;
	}
	catch (std::exception & e) {
		throw CastException();
	}

}

Cast::operator double( void ) const {

	try {
		if (_value.length() == 1 && !isdigit(_value[0]))
			return _value[0];
		double d = std::stod(_value);
		return d;
	}
	catch (std::exception & e) {
		throw CastException();
	}

}

const char *Cast::CastException::what() const throw() {

	return "impossible";

}
