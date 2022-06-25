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

ScavTrap::ScavTrap( std::string name ): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3) {

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

void ScavTrap::rangedAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at range, causing " << this->_rangedAttackDamage
			  << " points of damage!" << std::endl;
	std::cout <<  this->_name << ": " << "\"Gotta blow up a bad guy, GOTTA "
									  "BLOW UP A BAD GUY!\"" <<
	std::endl;

	return;

}

void ScavTrap::meleeAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << this->_name << ": " << "\"I'm a tornado of death and "
									 "bullets!\"" << std::endl;

}

void ScavTrap::takeDamage( unsigned int amount ) {


	int start_amount = amount;

	if (amount < this->_armorDamageReduction)
		amount = 0;
	else
		amount -= this->_armorDamageReduction;
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << ":\"NOOO!\"" << std::endl;
	std::cout <<  this->_name << " got attacked with " << start_amount <<
	" damage power! Shield reduced attack on " << start_amount - amount <<
	"! Current Hit Points: " << this->_hitPoints << std::endl;

	std::cout << this->_name << ": " << "\"No fair! I wasn't ready.\"" <<
	std::endl;

	return;

}

void ScavTrap::beRepaired( unsigned int amount ) {

	if (amount + this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << this->_name << ": " << "\"Nurse Clap is here!\"" << std::endl;
	std::cout << this->_name << " has repaired " << amount << ". Hit Points: "
			  << this->_hitPoints << std::endl;

	return;

}

void ScavTrap::challengeNewcomer(void) {

	std::string challenge[5] = {
			"\"What's that smell? Oh wait, it's just you!\"",
			"\"You look like something a skag barfed up!\"",
			"\"Come back here! I'll gnaw your legs off!\"",
			"\"You're one screw short of a screw!\"",
			"\"I bet your mom could do better!\""};
	std::srand(std::time(NULL));
	std::cout << this->_name << " meets a Newcomer: " << challenge[std::rand()
	% 5]	<< std::endl;

	return;

}
