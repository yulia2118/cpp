/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:14:13 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/16 22:14:19 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook book;
	std::string command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT):" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (!command.length())
			continue;
		else if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contact();
		else
			std::cerr << "Bad command" << std::endl;
	}
	return (0);
}
