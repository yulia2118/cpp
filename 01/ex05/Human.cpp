/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:17:07 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 00:17:09 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {

}

Human::~Human() {

}

std::string	Human::identify() const {
	return (this->brain.identify());
}

const Brain	&Human::getBrain() const {
	return (this->brain);
}

