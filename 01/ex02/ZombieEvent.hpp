/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:53:55 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:53:57 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {

private:
	std::string type;

public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType();
	Zombie*	newZombie(std::string name);

};

#endif
