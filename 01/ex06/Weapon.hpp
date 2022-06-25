/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:24:46 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 14:24:48 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

private:
	std::string type;

public:
	Weapon(const std::string &type);
	~Weapon();

	const std::string &getType() const;
	void setType(const std::string &type);

};

#endif
