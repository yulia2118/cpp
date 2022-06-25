/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:24:36 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:24:38 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {

}

Weapon::~Weapon() {

}

const std::string &Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(const std::string &type) {
	this->type = type;
}
