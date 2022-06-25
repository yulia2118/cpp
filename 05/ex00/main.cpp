/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:08:48 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/06 23:08:50 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bob("Bob", 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat joe("Joe", 0);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat bob("Bob", 149);
	try {
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat joe("Joe", 2);
	try {
		std::cout << joe << std::endl;
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.incrementGrade();
		std::cout << joe << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
