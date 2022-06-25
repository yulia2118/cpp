/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:28:30 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/15 12:28:33 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char)toupper(str[j]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
