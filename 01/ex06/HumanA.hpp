/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:23:30 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:23:32 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

private:
	std::string name;
	const Weapon &weapon;

public:
	HumanA(const std::string &name, const Weapon &weapon);
	~HumanA();

	void attack();

};

#endif
