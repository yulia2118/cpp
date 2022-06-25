/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:23:52 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:23:53 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(const Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}
