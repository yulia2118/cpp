/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:10 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:12 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50) {

	return ;

};

PowerFist::PowerFist( PowerFist const & src ) {

	*this = src;

	return ;

}

PowerFist::~PowerFist( void ) {

	return ;

}

PowerFist & PowerFist::operator=( PowerFist const & rhs ) {

	AWeapon::operator=(rhs);

	return *this;

}

void PowerFist::attack( void ) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;

	return ;

}
