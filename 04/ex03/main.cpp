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

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main() {

	IMateriaSource *src = new MateriaSource();
	AMateria *ice = new Ice();
	src->learnMateria(ice);
	AMateria *cure = new Cure();
	src->learnMateria(cure);
	ICharacter *me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(src->createMateria("cure"));
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	std::cout << "Current XP: " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "Current XP: " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "Current XP: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	me->equip(src->createMateria("ice"));
	me->use(1, *bob);

	delete tmp;
	delete ice;
	delete cure;
	delete bob;
	delete me;
	delete src;

	return (0);
}
