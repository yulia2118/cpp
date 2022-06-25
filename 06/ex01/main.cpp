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

#include "Data.hpp"

int main(void) {

	std::cout << "Serialize data:" << std::endl;
	void *raw = serialize();
	std::cout << std::endl;
	std::cout << "Deserialize data:" << std::endl;
	Data *data = deserialize(raw);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << "Size: " << sizeof(*data) << std::endl;
	delete data;

	return 0;

}
