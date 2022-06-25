/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:32:10 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/17 16:32:11 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap( T & a, T & b ) {

	T tmp = a;
	a = b;
	b = tmp;

	return ;
}

template <typename T>
T & min( T & a,  T & b ) {

	return ((a < b) ? a : b);

}

template <typename T>
T & max( T & a, T & b ) {

	return ((a > b) ? a : b);

}

#endif
