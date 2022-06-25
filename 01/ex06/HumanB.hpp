/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:23:41 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:23:43 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

private:
	std::string name;
	const Weapon *weapon;

public:
	HumanB(const std::string &name);
	~HumanB();

	void setWeapon(const Weapon &weapon);
	void attack(void);

};

#endif
