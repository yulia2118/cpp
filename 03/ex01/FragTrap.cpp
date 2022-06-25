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

FragTrap::FragTrap( std::string name ): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) {

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

void FragTrap::rangedAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at range, causing " << this->_rangedAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << this->_name << ": " << "\"Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!\"" <<
	std::endl;

	return;

}

void FragTrap::meleeAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << this->_name << ": " << "\"I'm a tornado of death and "
									  "bullets!\"" << std::endl;

}

void FragTrap::takeDamage( unsigned int amount ) {


	int start_amount = amount;

	if (amount < this->_armorDamageReduction)
		amount = 0;
	else
		amount -= this->_armorDamageReduction;
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout <<  this->_name << " got attacked with " << start_amount <<
	" damage power! Shield reduced attack on " << start_amount - amount <<
	"! Current Hit Points: " << this->_hitPoints << std::endl;

	std::cout << this->_name << ": " << "\"NOOO!\"" << std::endl;
	std::cout << this->_name << ": " << "\"No fair! I wasn't ready.\"" <<
	std::endl;

	return;

}

void FragTrap::beRepaired( unsigned int amount ) {

	if (amount + this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << this->_name << " has repaired " << amount << ". Hit Points: "
			  << this->_hitPoints << std::endl;
	std::cout << this->_name << ": " << "\"Nurse Clap is here!\"" << std::endl;

	return;

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
