/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:53:55 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:53:57 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {

private:
	int N;
	Zombie *zombies;

public:
	ZombieHorde(int N);
	~ZombieHorde();

	void	announce() const;

};

#endif
