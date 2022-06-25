/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:23 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:25 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )  {

	std::cout << "ClapTrap created!" << std::endl;

	return;

}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap constructor called." << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructor called." << std::endl;

	return;

}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {

	std::cout << "ClapTrap assignation operator called." << std::endl;
	(void)rhs;

	return *this;

}

void ClapTrap::rangedAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at range, causing " << this->_rangedAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << this->_name << ": " << "\"Gotta blow up a bad guy, GOTTA "
									 "BLOW UP A BAD GUY!\"" << std::endl;

	return;

}

void ClapTrap::meleeAttack( std::string const & target ) {

	std::cout << this->_name << " attacks "<< target
			  << " at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << this->_name << ": " << "\"I'm a tornado of death and "
									 "bullets!\"" << std::endl;

}

void ClapTrap::takeDamage( unsigned int amount ) {


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

void ClapTrap::beRepaired( unsigned int amount ) {

	if (amount + this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << this->_name << " has repaired " << amount << ". Hit Points: "
			  << this->_hitPoints << std::endl;
	std::cout << this->_name << ": " << "\"Nurse Clap is here!\"" << std::endl;

	return;

}
