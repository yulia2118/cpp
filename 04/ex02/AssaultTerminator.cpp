/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:18:33 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:18:34 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ) {

	std::cout << "* teleports from space *" << std::endl;

	return ;

}

AssaultTerminator::AssaultTerminator( ISpaceMarine const & src ) {

	*this = src;

	return ;

}

AssaultTerminator::~AssaultTerminator( void ) {

	std::cout << "I’ll be back..." << std::endl;

	return ;

}

ISpaceMarine & AssaultTerminator::operator=( ISpaceMarine const & rhs ) {

	(void)rhs;

	return *this;

}

ISpaceMarine * AssaultTerminator::clone( void ) const {

	ISpaceMarine *item = new AssaultTerminator();
	*item = *this;

	return item;

}

void AssaultTerminator::battleCry( void ) const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

	return ;

}

void AssaultTerminator::rangedAttack( void ) const {

	std::cout << "* does nothing *" << std::endl;

	return ;

}

void AssaultTerminator::meleeAttack( void ) const {

	std::cout << "* attacks with chainfists *" << std::endl;

	return ;

}
