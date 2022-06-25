/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:11:16 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:11:18 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21) {

	return ;

};

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) {

	*this = src;

	return ;

}

PlasmaRifle::~PlasmaRifle( void ) {

	return ;

}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs ) {

	AWeapon::operator=(rhs);

	return *this;

}

void PlasmaRifle::attack( void ) const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;

	return ;

}
