/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewEnemy.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:53 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewEnemy.hpp"

NewEnemy::NewEnemy( void ) : Enemy(100, "New Enemy") {

	std::cout << "* hello there *" << std::endl;

	return ;

}

NewEnemy::NewEnemy( NewEnemy const & src ) {

	*this = src;

	return ;

}

NewEnemy::~NewEnemy( void ) {

	std::cout << "Bay... " << std::endl;

	return ;

}

NewEnemy & NewEnemy::operator=( NewEnemy const & rhs ) {

	Enemy::operator=(rhs);

	return *this;

}
