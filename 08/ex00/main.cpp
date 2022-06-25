/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:30:33 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:30:36 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void displayInt(int i) {
	std::cout << i << "\t";
}

int main ( void ) {

	std::cout << "List:" << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);
	std::for_each(lst.begin(), lst.end(), displayInt);
	std::cout << std::endl;
	try {
		std::cout << "Find value 9: ";
		std::list<int>::iterator iter = easyfind(lst, 9);
		std::cout << "Element is found: " << *iter << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Find value 10: ";
		std::list<int>::iterator iter = easyfind(lst, 10);
		std::cout << "Element is found: " << *iter << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Vector:" << std::endl;

	std::vector<int> numbers;
	for (int i = 0; i < 10; i++)
		numbers.push_back(i);
	std::for_each(lst.begin(), lst.end(), displayInt);
	std::cout << std::endl;
	try {
		std::cout << "Find value 5: ";
		std::vector<int>::iterator iter = easyfind(numbers, 5);
		std::cout << "Element found: " << *iter << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Find value 25: ";
		std::vector<int>::iterator iter = easyfind(numbers, 25);
		std::cout << "Element found: " << *iter << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
