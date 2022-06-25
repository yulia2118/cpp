/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:53:39 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:53:42 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {

}

ZombieEvent::~ZombieEvent() {

}

void	ZombieEvent::setZombieType() {
	std::string types[6] = {"simple","big","small","little","large","last"};
	std::srand(std::time(NULL));
	this->type = types[std::rand() % 6];
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie* newZombie = new Zombie(name, this->type);
	return (newZombie);
}
