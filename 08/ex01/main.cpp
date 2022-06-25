/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:31:31 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:31:33 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main() {

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	try {
		sp.addNumber(99);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(1);
	sp2.addNumber(21);
	try {
		std::cout <<  sp2.shortestSpan() << std::endl;
		std::cout <<  sp2.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Span sp1 = Span(10000);
	std::srand(std::time(NULL));
	std::vector<int> vector;
	for (int i = 0; i < 10000; i++)
		vector.push_back(std::rand());
	sp1.addNumber(vector.begin(), vector.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	try {
		sp1.addNumber(vector.begin(), vector.end());
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;

}
