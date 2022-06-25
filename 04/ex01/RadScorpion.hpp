/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:12:53 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:12:55 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion( void );
	RadScorpion( RadScorpion const & src );
	virtual ~RadScorpion( void );

	RadScorpion & operator=( RadScorpion const & rhs );

};

#endif
