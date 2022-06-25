/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:33:46 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/17 16:33:48 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template <typename T>
class Array {
private:
	unsigned int length;
	T * arr;
public:
	Array( void ) : length(0) {
		this->arr = new T[0];
		return ;
	}
	Array( unsigned int n ) : length(n) {
		this->arr = new T[this->length];
		return ;
	}
	Array( Array<T> const & src ) : length(0) {
		this->arr = new T[src.length]();
		for (unsigned int i = 0; i < src.length; i++)
			this->arr[i] = src.arr[i];
		this->length = src.length;
		return ;
	}
	virtual ~Array( void ) {
		delete[] this->arr;
		return ;
	}
	Array & operator=( Array const & rhs ) {
		delete[] this->arr;
		this->arr = NULL;
		this->arr = new T[rhs.length]();
		for (unsigned int i = 0; i < rhs.length; i++)
			this->arr[i] = rhs.arr[i];
		this->length = rhs.length;
		return *this;
	}
	T & operator[]( unsigned int index ) {
		if (index >= this->length)
			throw Array::AccessException();
		return (this->arr[index]);
	}
	T const & operator[]( unsigned int index ) const {
		return (operator[](index));
	}
	unsigned int size( void ) const {
		return (this->length);
	}
	class AccessException: public std::exception {
		virtual const char * what() const throw() {
			return("Element out of the limits");
		}
	};
};

#endif
