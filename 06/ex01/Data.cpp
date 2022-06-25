/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data * initData(void)
{
	std::srand(std::time(NULL));
	Data * data = new Data();
	data->s1 = "";
	data->s2 = "";
	std::string random = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
	for (int i = 0; i < 24; i++) {
		data->s1 += random[std::rand() % random.length() - 1];
		data->s2 += random[std::rand() % random.length() - 1];
	}
	data->n = std::rand() % 10000;

	return (data);
}

void * serialize( void ) {

	Data * data = initData();
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << "Size: " << sizeof(*data) << std::endl;

	return (reinterpret_cast<void *>(data));

}

Data * deserialize( void * raw ) {

	return (reinterpret_cast<Data *>(raw));

}
