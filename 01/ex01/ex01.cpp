/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:48:33 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/24 21:48:36 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak() {
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
