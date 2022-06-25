/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:53 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "Rad Scorpion") {

	std::cout << "* click click click *" << std::endl;

	return ;

}

RadScorpion::RadScorpion( RadScorpion const & src ) {

	*this = src;

	return ;

}

RadScorpion::~RadScorpion( void ) {

	std::cout << "* SPROTCH *" << std::endl;

	return ;

}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs ) {

	Enemy::operator=(rhs);

	return *this;

}
