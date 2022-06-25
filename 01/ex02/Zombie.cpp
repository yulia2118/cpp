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

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {

}

Zombie::~Zombie() {

}

void	Zombie::announce() const {
	std::cout << this->name << " (" << this->type << ") Braiiiiiiinnnssss..."
	<< std::endl;
}
