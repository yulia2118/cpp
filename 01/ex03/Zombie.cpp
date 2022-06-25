/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:53:02 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:53:05 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::string names[10] = {"John","Robert","Eric","Kris","Edvard","Samuel","Bob","York","Harry","Harold"};
	std::string types[6] = {"simple","big","small","little","large","last"};
	this->name = names[std::rand() % 10];
	this->type = types[std::rand() % 6];
}

Zombie::~Zombie() {

}

void	Zombie::announce() const {
	std::cout << this->name << " (" << this->type << ") Braiiiiiiinnnssss..."
	<< std::endl;
}
