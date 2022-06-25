/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:22:11 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:22:13 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {

private:

	std::string _name;
	AMateria *_materias[4];
	int _slot;

	Character( void );

	void clear( void );

public:

	Character( std::string const & name );
	Character( Character const & src );
	virtual ~Character( void );

	Character & operator=( Character const & rhs );

	std::string const & getName( void ) const;
	void equip( AMateria * m );
	void unequip( int idx );
	void use( int idx, ICharacter & target );

};

#endif
