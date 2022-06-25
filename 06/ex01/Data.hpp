/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#pragma pack(push, 1)
struct Data {
	std::string s1;
	int n;
	std::string s2;
};
#pragma pack(pop)
void * serialize( void) ;
Data * deserialize( void * raw );
#endif
