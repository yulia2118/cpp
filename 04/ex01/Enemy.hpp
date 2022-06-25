/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:10:41 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:10:42 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy {

private:

	std::string _type;
	int _hp;

protected:

	Enemy( void );

public:

	Enemy( int hp, std::string const & type );
	Enemy( Enemy const & src );
	virtual ~Enemy( void );

	Enemy & operator=( Enemy const & rhs );

	std::string const & getType( void ) const;
	int getHP( void ) const;
	virtual void takeDamage( int damage );

};

#endif
