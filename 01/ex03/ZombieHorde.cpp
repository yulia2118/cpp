/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:53:39 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:53:42 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->N = N;
	this->zombies = new Zombie[N];
}

ZombieHorde::~ZombieHorde() {
	delete [] this->zombies;
}

void	ZombieHorde::announce(void) const {
	for (int i = 0; i < this->N; i++) {
		this->zombies[i].announce();
	}
}
