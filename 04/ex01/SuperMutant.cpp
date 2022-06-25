/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:13:44 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:13:45 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;

	return ;

}

SuperMutant::SuperMutant(SuperMutant const & src) {

	*this = src;

	return ;

}

SuperMutant::~SuperMutant( void ) {

	std::cout << "Aaargh..." << std::endl;

	return ;

}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {

	Enemy::operator=(rhs);

	return *this;

}

void SuperMutant::takeDamage( int damage ) {

	Enemy::takeDamage(damage - 3);

	return ;

}
