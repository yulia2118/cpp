/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:44:59 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 15:45:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

std::string makeReplace(std::string str, const std::string &s1, const
std::string &s2) {
	std::string res = "";
	int j;

	for (int i = 0; i < (int)str.length(); i++) {
		j = 0;
		while(str[i + j] == s1[j] && j <
		(int)s1.length())
			j++;
		if (j == (int)s1.length()) {
			res.append(s2);
			i += (j - 1);
		}
		else
			res += str[i];
	}
	return (res);
}

int main(int argc, char **argv) {
	std::ifstream file;
	std::ofstream replace;
	std::string str;

	if (argc == 4) {
		try {
			if (!strlen(argv[2]) || !strlen(argv[3]))
				throw "Bad string";
			if (!strlen(argv[1]))
				throw "Bad filename";
			file.open(argv[1]);
			replace.open(std::string(argv[1]) + ".replace", std::ios::trunc);
			if (!file.is_open() || !replace.is_open())
				throw "Bad file";
			while (std::getline(file, str)) {
				replace << makeReplace(str, argv[2], argv[3]);
				if (!file.eof())
					replace << std::endl;
			}
		}
		catch(const char *exception) {
			std::cerr << exception << std::endl;
		}
	}
	else
		std::cout << "Bad arguments" << std::endl;
	file.close();
	replace.close();
}