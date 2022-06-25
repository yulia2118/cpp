/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:21:04 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:21:06 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice") {

	return ;

}

Ice::Ice( AMateria const & src ) {

	*this = src;

	return ;

}

Ice::~Ice( void ) {

	return ;

}

AMateria & Ice::operator=( AMateria const & rhs ) {

	AMateria::operator=(rhs);

	return *this;

}

AMateria * Ice::clone( void ) const {

	return (new Ice(*this));

}

void Ice::use( ICharacter & target ) {

	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;

}
