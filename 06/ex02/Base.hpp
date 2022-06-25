/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {
	virtual ~A() {};
};

class B : public Base {
	virtual ~B() {};
};

class C : public Base {
	virtual ~C() {};
};

Base * generate( void );
void identify_from_pointer( Base * ptr );
void identify_from_reference( Base & ptr );

#endif
