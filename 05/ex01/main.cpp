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
#include "Form.hpp"

int main()
{
	Bureaucrat joe("Joe", 2);
	Form contract("Contract", 1, 150);

	try {
		std::cout << contract << std::endl;
		std::cout << joe << std::endl;
		joe.signForm(contract);
	}
	catch (std::exception & e) {
		std::cerr << e.what()  << std::endl;
	}
	try {
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.signForm(contract);
		std::cout << contract << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what()  << std::endl;
	}

	return 0;
}
