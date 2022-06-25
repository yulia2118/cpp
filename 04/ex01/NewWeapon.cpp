/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewWeapon.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:10 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:12 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewWeapon.hpp"

NewWeapon::NewWeapon( void ) : AWeapon("New Weapon", 10, 35) {

	return ;

};

NewWeapon::NewWeapon( NewWeapon const & src ) {

	*this = src;

	return ;

}

NewWeapon::~NewWeapon( void ) {

	return ;

}

NewWeapon & NewWeapon::operator=( NewWeapon const & rhs ) {

	AWeapon::operator=(rhs);

	return *this;

}

void NewWeapon::attack( void ) const {

	std::cout << "* BOOM... BOOM... BOOM... *" << std::endl;

	return ;

}
