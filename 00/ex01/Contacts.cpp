/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:16:21 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/16 22:16:24 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(void) {
	Contacts::clean_data();
}

std::string	Contacts::get_first_name() const {
	return (first_name);
}

std::string Contacts::get_last_name() const {
	return (last_name);
}

std::string Contacts::get_nickname() const {
	return (nickname);
}

int Contacts::check_data() const {
	return (have_data);
}

void Contacts::take_data(void) {
	std::cout << "first name: ";
	getline(std::cin, first_name);
	std::cout << "last name: ";
	getline(std::cin, last_name);
	std::cout << "nickname: ";
	getline(std::cin, nickname);
	std::cout << "login: ";
	getline(std::cin, login);
	std::cout << "postal address: ";
	getline(std::cin, postal_address);
	std::cout << "email address: ";
	getline(std::cin, email_address);
	std::cout << "phone number: ";
	getline(std::cin, phone_number);
	std::cout << "birthday date: ";
	getline(std::cin, birthday_date);
	std::cout << "favorite meal: ";
	getline(std::cin, favorite_meal);
	std::cout << "underwear color: ";
	getline(std::cin, underwear_color);
	std::cout << "darkest secret: ";
	getline(std::cin, darkest_secret);
	have_data = 1;
}

void Contacts::show_data(const std::string &str) const {
	if (str.length() > 11) {
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	}
	else {
		std::cout << std::setw(10) << str;
	}
}

void Contacts::clean_data(void) {
	first_name.clear();
	last_name.clear();
	nickname.clear();
	login.clear();
	postal_address.clear();
	email_address.clear();
	phone_number.clear();
	birthday_date.clear();
	favorite_meal.clear();
	underwear_color.clear();
	darkest_secret.clear();
	have_data = 0;
}

Contacts::~Contacts(void) {
	Contacts::clean_data();
}
