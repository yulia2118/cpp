/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Neon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:05:21 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:05:24 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Neon.hpp"

Neon::Neon( void ) {

	return ;

}

Neon::Neon( std::string const & name ) : Victim(name) {

	std::cout << "Meow Meow." << std::endl;

	return ;

}

Neon::Neon( Neon const & src ) {

	*this = src;

	return ;

}

Neon::~Neon( void ) {

	std::cout << "Bay..." << std::endl;

	return ;

}

Neon & Neon::operator=( Neon const & rhs ) {

	Victim::operator=(rhs);

	return *this;

}

void Neon::getPolymorphed( void ) const {

	std::cout << this->getName() << " has been turned into a big perifalk!" <<
	std::endl;

	return ;

}
