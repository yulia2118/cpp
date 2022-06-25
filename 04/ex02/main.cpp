/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:08:40 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:08:42 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main() {

	ISpaceMarine* Marine = new TacticalMarine;
	ISpaceMarine* Terminator = new AssaultTerminator;
	Squad* Squad1 = new Squad;
	Squad1->push(Marine);
	Squad1->push(Terminator);
	for (int i = 0; i < Squad1->getCount(); ++i) {
		ISpaceMarine* cur = Squad1->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "Number of units in Squad1: " << Squad1->getCount() <<
	std::endl;
	Squad* Squad2 = new Squad;
	*Squad2 = *Squad1;
	delete Squad1;
	std::cout << "Number of units in Squad2: " << Squad2->getCount() <<
	std::endl;
	ISpaceMarine* Marine1 = new TacticalMarine;
	ISpaceMarine* Terminator1 = new AssaultTerminator;
	ISpaceMarine* Marine2 = new TacticalMarine;
	ISpaceMarine* Terminator2 = new AssaultTerminator;
	Squad2->push(Marine1);
	Squad2->push(Terminator1);
	Squad2->push(Marine2);
	Squad2->push(Terminator2);
	std::cout << "Number of units in Squad2: " << Squad2->getCount() <<
	std::endl;
	Squad* Squad3 = new Squad;
	*Squad3 = *Squad2;
	std::cout << "Number of units in Squad3: " << Squad3->getCount() <<
	std::endl;
	delete Squad2;
	delete Squad3;

	return 0;
}
