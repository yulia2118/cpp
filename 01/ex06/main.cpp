/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:24:15 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:24:17 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
		{
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
}
