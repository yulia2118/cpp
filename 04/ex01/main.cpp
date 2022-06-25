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
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "NewEnemy.hpp"
#include "NewWeapon.hpp"

int main() {

	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* sm = new SuperMutant();
	Enemy* ne = new NewEnemy();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* nw = new NewWeapon();
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << "Rad Scorpion HP: " << b->getHP() << std::endl;
	std::cout << *me;
	me->attack(sm);
	std::cout << "Super Mutant HP: " << sm->getHP() << std::endl;
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << "Rad Scorpion HP: " << b->getHP() << std::endl;
	std::cout << *me;
	me->attack(sm);
	std::cout << "Super Mutant HP: " << sm->getHP() << std::endl;
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->attack(sm);
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->equip(nw);
	me->attack(ne);

	delete ne;
	delete nw;
	delete pr;
	delete pf;
	delete sm;
	delete me;

	return 0;

}
