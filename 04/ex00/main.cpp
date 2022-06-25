/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:05:03 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:05:05 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Neon.hpp"

int main() {

	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Neon jay("Jay");

	std::cout << robert << jim << joe << jay;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jay);

	return 0;

}
