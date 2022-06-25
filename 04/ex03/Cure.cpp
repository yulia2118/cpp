/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:21:34 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:21:36 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {

	return ;

}

Cure::Cure( AMateria const & src ) {

	*this = src;

	return ;

}

Cure::~Cure( void ) {

	return ;

}

AMateria & Cure::operator=( AMateria const & rhs ) {

	AMateria::operator=(rhs);

	return *this;

}

AMateria * Cure::clone( void ) const {

	return (new Cure(*this));

}

void Cure::use( ICharacter & target ) {

	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return ;

}
