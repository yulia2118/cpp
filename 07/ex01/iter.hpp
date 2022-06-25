/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:33:11 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/17 16:33:13 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <string>
# include <iostream>

template<typename T>
void iter( T array[], int length, void (*f)( T const & elem ) ) {

	for (int i = 0; i < length; i++)
		f(array[i]);

	return ;

}

#endif
