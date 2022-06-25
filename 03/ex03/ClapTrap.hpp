/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:34 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:35 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>

class ClapTrap {

protected:

	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	unsigned int _armorDamageReduction;

public:

	ClapTrap( void );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap const & rhs );

	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

};

#endif
