/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:23 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:25 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name ) {

	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << this->_name << ": " <<
			  "\"I'm a robot ninja...\"" << std::endl;

	return;

}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {

	std::cout << this->_name << " constructor called." << std::endl;
	*this = src;

	return;
}

NinjaTrap::~NinjaTrap( void ) {

	std::cout << this->_name << ": " <<
			  "\"Away with thee!\"" << std::endl;

	return;

}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs ) {

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

void NinjaTrap::ninjaShoebox(ScavTrap & scav) {

	scav.challengeNewcomer();
	std::cout << this->_name << ": \"Cool! Now we're both super-crazy-amazing!\"" << std::endl;

	return;
}

void NinjaTrap::ninjaShoebox(FragTrap & frag) {

	std::cout << this->_name << ": \"Get ready for some Fragtrap face time!\""
			  << std::endl;
	frag.vaulthunter_dot_exe(this->_name);

	return;

}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninja) {

		std::cout << "WOW! " << this->_name << " meets " << ninja._name << std::endl;
		std::cout  << this->_name <<
		": \"I'm Trap, Claptrap. Double oh... Trap.\"" << std::endl;

		return;

}
