/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:46 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:48 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main (void) {

	std::string robot1 = "FragTrap";
	std::string victim = "Hector";

	FragTrap FragTrap(robot1);

	FragTrap.rangedAttack(victim);
	FragTrap.takeDamage(80);
	FragTrap.beRepaired(50);
	FragTrap.meleeAttack(victim);
	FragTrap.takeDamage(999);
	FragTrap.beRepaired(999);
	for (int i = 0; i < 5; i++)
		FragTrap.vaulthunter_dot_exe(victim);

	std::string robot2 = "ScavTrap";

	ScavTrap ScavTrap(robot2);

	ScavTrap.rangedAttack(victim);
	ScavTrap.takeDamage(80);
	ScavTrap.beRepaired(50);
	ScavTrap.meleeAttack(victim);
	ScavTrap.takeDamage(999);
	ScavTrap.beRepaired(999);
	ScavTrap.challengeNewcomer();

	NinjaTrap ninja1("NinjaTrap1");
	NinjaTrap ninja2("NinjaTrap2");

	ninja1.rangedAttack(victim);
	ninja1.takeDamage(80);
	ninja1.beRepaired(50);
	ninja1.meleeAttack(victim);
	ninja1.takeDamage(999);
	ninja1.beRepaired(999);
	ninja1.ninjaShoebox(ScavTrap);
	ninja1.ninjaShoebox(FragTrap);
	ninja1.ninjaShoebox(ninja2);

	std::string robot3 = "SuperTrap";

	SuperTrap SuperTrap(robot3);

	SuperTrap.takeDamage(80);
	SuperTrap.beRepaired(50);
	SuperTrap.rangedAttack(victim);
	SuperTrap.meleeAttack(victim);

	return 0;

}
