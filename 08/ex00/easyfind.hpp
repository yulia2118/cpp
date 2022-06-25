/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:31:08 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:31:11 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <string>
# include <iostream>
# include <iterator>
# include <algorithm>
# include <list>
# include <vector>

template <typename T>
typename T::iterator easyfind( T & container, int value ) {

	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("Element is not found");
	return it;

}

#endif
