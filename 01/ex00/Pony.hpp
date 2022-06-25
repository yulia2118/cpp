/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:27:31 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/18 15:27:34 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony {

private:
	int	number;
	std::string type;

public:
	Pony(int number, std::string type);
	~Pony();

	void information();

};

#endif
