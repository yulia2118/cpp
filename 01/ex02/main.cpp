/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:52:40 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:52:42 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string names[10] = {"John","Robert","Eric","Kris","Edvard","Samuel",
						 "Bob","York","Harry","Harold"};

void	zombieOnHeap() {
	ZombieEvent event;
	event.setZombieType();
	std::srand(std::time(NULL));
	Zombie* zombieOnHeap = event.newZombie(names[std::rand() % 5]);
	std::cout << "There is 'zombie on heap': " << std::endl;
	zombieOnHeap->announce();
	delete zombieOnHeap;
}

void	zombieOnStack() {
	Zombie zombieOnStack(names[std::rand() % 5], "simple");
	std::cout << "There is 'zombie on stack': " << std::endl;
	zombieOnStack.announce();
	std::cout << "There is 'random zombie': " << std::endl;
}

void	randomChump() {
	std::srand(std::time(NULL));
	Zombie* randomZombie = new Zombie(names[std::rand() % 10], "last");
	randomZombie->announce();
	delete randomZombie;
}

int	main() {
	zombieOnHeap();
	zombieOnStack();
	randomChump();
	return (0);
}
