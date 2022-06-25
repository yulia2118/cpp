/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:23 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:25 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_name << ": " <<
			  "\"Sooooo... how are things?\"" << std::endl;

	return;

}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << this->_name << " constructor called." << std::endl;
	*this = src;

	return;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << this->_name << ": " <<
	"\"I'm invisible!\"" << std::endl;

	return;

}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {

	std::cout << "Assignation operator called." << std::endl;
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

void ScavTrap::challengeNewcomer(void) {

	std::string challenge[5] = {
			"\"What's that smell? Oh wait, it's just you!\"",
			"\"You look like something a skag barfed up!\"",
			"\"Come back here! I'll gnaw your legs off!\"",
			"\"You're one screw short of a screw!\"",
			"\"I bet your mom could do better!\""};
	std::srand(std::time(NULL));
	std::cout << this->_name << ": " << challenge[std::rand()
	% 5]	<< std::endl;

	return;

}
