/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:24:27 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:24:28 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _slot(0) {

	return ;

}

MateriaSource::MateriaSource( MateriaSource const & src ) {

	*this = src;

	return ;

}

void MateriaSource::clear( void ) {

	for (int i = 0; i < this->_slot; i++) {
		delete this->_materias[i];
	}
	this->_slot = 0;

	return ;

}

MateriaSource::~MateriaSource( void ) {

	this->clear();

	return ;

}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {

	this->clear();
	this->_slot = rhs._slot;
	for (int i = 0; i < this->_slot; i++) {
		this->_materias[i] = rhs._materias[i]->clone();
	}

	return *this;

}

void MateriaSource::learnMateria( AMateria * m ) {

	if (!m || this->_slot >= 4)
		return ;
	this->_materias[this->_slot] = m->clone();
	this->_slot++;

	return ;

}

AMateria * MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < this->_slot; i++) {
		if (this->_materias[i]->getType() == type) {
			return (this->_materias[i]->clone());
		}
	}

	return NULL;

}
