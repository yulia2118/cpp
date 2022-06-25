/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:27:43 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/18 15:27:46 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int number, std::string type) : number(number), type(type) {
	std::cout << "Constructor: Pony number " << number << " is born with type "
	<< type << std::endl;
}

Pony::~Pony() {
	std::cout << "Destructor: Pony number " << number << " with type " <<
	type <<	" is destroyed" << std::endl;
}

void Pony::information() {
	std::cout << "Information about the Pony: There is pony number " <<
	number <<	" with type " << type << std::endl;
}
