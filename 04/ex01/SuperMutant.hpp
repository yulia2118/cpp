/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:13:33 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:13:34 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant( void );
	SuperMutant( SuperMutant const & src );
	virtual ~SuperMutant( void );

	SuperMutant & operator=( SuperMutant const & rhs );

	virtual void takeDamage( int damage );

};

#endif
