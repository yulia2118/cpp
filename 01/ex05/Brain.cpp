/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:16:38 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 00:16:40 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain() {
	this->size = std::rand();
}

Brain::~Brain() {

}

std::string	Brain::identify() const {
	std::ostringstream	oss;

	oss << this;
	return (oss.str());
}
