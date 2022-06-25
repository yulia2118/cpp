/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:23 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:25 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name ): NinjaTrap(name), FragTrap(name) {

	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	std::cout  << "SuperTrap created!" << std::endl;

	return;

}

SuperTrap::SuperTrap( SuperTrap const & src ): NinjaTrap(src), FragTrap(src) {

	std::cout << "SuperTrap constructor called." << std::endl;
	*this = src;

	return;
}

SuperTrap::~SuperTrap( void ) {

	std::cout << "SuperTrap Destructor called." << std::endl;

	return;

}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs ) {

	std::cout << "SuperTrap Assignation operator called." << std::endl;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;

	return *this;

}
