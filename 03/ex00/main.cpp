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

int main (void) {

	std::string robot = "FragTrap";
	std::string victim = "Hector";

	FragTrap FragTrap(robot);
	FragTrap.rangedAttack(victim);
	FragTrap.takeDamage(80);
	FragTrap.beRepaired(50);
	FragTrap.meleeAttack(victim);
	FragTrap.takeDamage(999);
	FragTrap.beRepaired(999);
	for (int i = 0; i < 5; i++)
		FragTrap.vaulthunter_dot_exe(victim);

	return 0;

}
