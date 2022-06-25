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

#include "Cast.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		std::string str(argv[1]);
		Cast cast(str);
		std::cout << "char: ";
		try {
			char c = static_cast<char>(cast);
			if (c >= 32 && c <= 127)
				std::cout << "'" << c << "'" << std::endl;
			else if (str.find("inf") != std::string::npos || str.find("nan")
			!= std::string::npos)
				std::cout << "impossible" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "int: ";
		try {
			int i = static_cast<int>(cast);
			if (str.find("inf") != std::string::npos || str.find("nan") !=
			std::string::npos)
				std::cout << "impossible" << std::endl;
			else
				std::cout << i << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "float: ";
		try {
			float f = static_cast<float>(cast);
			std::cout << f;
			if (str.find("inf") != std::string::npos || str.find("nan") !=
			std::string::npos || (str.find(".") != std::string::npos &&
			str.find(".0") == std::string::npos && f != 0))
				std::cout << "f" << std::endl;
			else
				std::cout << ".0f" << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "double: ";
		try {
			double d = static_cast<double>(cast);
			if (str.find("inf") != std::string::npos || str.find("nan") !=
			std::string::npos || (str.find(".") != std::string::npos &&
			str.find(".0") == std::string::npos && d != 0))
				std::cout << d << std::endl;
			else
				std::cout << d << ".0" << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;

	return 0;
}
