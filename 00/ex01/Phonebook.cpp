/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:16:44 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/16 22:16:46 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	Phonebook::clean_contacts();
}

void Phonebook::add_contact(void) {
	int i;

	for (i = 0; contact[i].check_data() && i < 8; i++)
		;
	if (i < 8)
		contact[i].take_data();
	else
		std::cerr << "Phonebook is full" << std::endl;
}

void Phonebook::search_contact(void) const {
	for (int i = 0; i < 8 && contact[i].check_data(); i++) {
		std::cout << "|" << std::setw(10) << i << "|";
		contact[i].show_data(contact[i].get_first_name());
		std::cout << "|";
		contact[i].show_data(contact[i].get_last_name());
		std::cout << "|";
		contact[i].show_data(contact[i].get_nickname());
		std::cout << "|" << std::endl;
	}
}

void Phonebook::clean_contacts(void) {
	for (int i = 0; i < 8; i++) {
		contact[i].clean_data();
	}
}

Phonebook::~Phonebook(void) {
	Phonebook::clean_contacts();
}
