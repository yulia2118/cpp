/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:19:20 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:19:21 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void ) {

	std::cout << "Tactical Marine ready for battle!" << std::endl;

	return ;

}

TacticalMarine::TacticalMarine( ISpaceMarine const & src ) {

	*this = src;

	return ;

}

TacticalMarine::~TacticalMarine( void ) {

	std::cout << "Aaargh..." << std::endl;

	return ;

}

ISpaceMarine & TacticalMarine::operator=( ISpaceMarine const & rhs ) {

	(void)rhs;

	return *this;

}

ISpaceMarine * TacticalMarine::clone( void ) const {

	ISpaceMarine *item = new TacticalMarine();
	*item = *this;

	return item;

}

void TacticalMarine::battleCry( void ) const {

	std::cout << "For the holy PLOT!" << std::endl;

	return ;

}

void TacticalMarine::rangedAttack( void ) const {

	std::cout << "* attacks with a bolter *" << std::endl;

	return ;

}

void TacticalMarine::meleeAttack( void ) const {

	std::cout << "* attacks with a chainsword *" << std::endl;

	return ;

}
