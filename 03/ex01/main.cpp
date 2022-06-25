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

	return 0;

}
