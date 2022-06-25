/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:17:43 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 00:17:45 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {

private:
	const Brain	brain;

public:
	Human();
	~Human();

	std::string	identify() const;
	const Brain &getBrain() const;

};

#endif
