/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:23:00 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:23:10 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) : name(name),
weapon(weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
	std::cout << name + " attacks with his " + weapon.getType() << std::endl;
}
