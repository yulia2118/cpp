/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:05:21 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:05:24 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void ) {

	return ;

}

Peon::Peon( std::string const & name ) : Victim(name) {

	std::cout << "Zog zog." << std::endl;

	return ;

}

Peon::Peon( Peon const & src ) {

	*this = src;

	return ;

}

Peon::~Peon( void ) {

	std::cout << "Bleuark..." << std::endl;

	return ;

}

Peon & Peon::operator=( Peon const & rhs ) {

	Victim::operator=(rhs);

	return *this;

}

void Peon::getPolymorphed( void ) const {

	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;

	return ;

}
