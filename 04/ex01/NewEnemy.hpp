/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewEnemy.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:53 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWENEMY_HPP
# define NEWENEMY_HPP

# include "Enemy.hpp"

class NewEnemy : public Enemy {

public:

	NewEnemy( void );
	NewEnemy( NewEnemy const & src );
	virtual ~NewEnemy( void );

	NewEnemy & operator=( NewEnemy const & rhs );

};

#endif
