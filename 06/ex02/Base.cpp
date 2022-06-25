/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate( void ) {

	static int i = 0;
	std::srand(std::time(NULL));
	int randomNumber = (std::rand() + i++) % 3;
	if (!randomNumber) {
		std::cout << "Generate class A" << std::endl;
		return (new A());
	}
	else if (randomNumber == 1) {
		std::cout << "Generate class B" << std::endl;
		return (new B());
	}
	else if (randomNumber == 2) {
		std::cout << "Generate class C" << std::endl;
		return (new C());
	}
	else
		return NULL;

}

void identify_from_pointer( Base * ptr ) {

	if (dynamic_cast<A *>(ptr))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(ptr))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(ptr))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;

	return ;

}

void identify_from_reference( Base & ptr ) {

	if (dynamic_cast<A *>(& ptr))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(& ptr))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(& ptr))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;

	return ;

}