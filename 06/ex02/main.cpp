/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {

	Base * base;
	std::cout << "identify_from_pointer" << std::endl;
	for (int i = 1; i < 4; i++) {
		base = generate();
		identify_from_pointer(base);
		delete base;
	}
	std::cout << "identify_from_reference" << std::endl;
	for (int i = 1; i < 4; i++) {
		base = generate();
		identify_from_reference(*base);
		delete base;
	}

	return 0;

}
