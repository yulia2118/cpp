/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:08:41 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 00:08:44 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &reference = str;

	std::cout << "There is a pointer: " << *pointer << std::endl;
	std::cout << "There is a reference: " << reference << std::endl;
	return (0);
}
