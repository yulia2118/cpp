/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:23 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:25 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_name << ": " <<
			  "\"Let's get this party started!\"" << std::endl;

	return;

}

FragTrap::FragTrap( FragTrap const & src ) {

	std::cout << this->_name << " constructor called." << std::endl;
	*this = src;

	return;
}

FragTrap::~FragTrap( void ) {

	std::cout << this->_name << ": " <<
	"\"Dangit, I'm out!\"" << std::endl;

	return;

}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {

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

void FragTrap::vaulthunter_dot_exe( std::string const & target )
{

	int damage[5] = {10, 20, 30, 40, 50};
	std::string weapons[5] = {"Element of Suprise", "Pain Simulator",
							  "Death Machine",
							  "Maniacal Laughter", "Rainbow Coolant"};
	if (this->_energyPoints > 24)
	{
		this->_energyPoints -= 25;
		std::cout << this->_name << " attacks " << target
				  << " with " << weapons[std::rand() % 5] << " causing "
				  << damage[std::rand() % 5] << " points of damage! Energy: " <<
				  this->_energyPoints << std::endl;
		std::cout << this->_name << ": " << "\"Oh god I can't stop!\"" <<
		std::endl;
	}
	else {
		std::cout << "Warning! Too little energy! Energy: " <<
			  this->_energyPoints << std::endl;
		std::cout << this->_name << ": " << "\"Crap happens.\"" << std::endl;
	}

	return;

}
