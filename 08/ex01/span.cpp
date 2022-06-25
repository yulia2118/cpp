/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:31:46 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:31:48 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"span.hpp"

Span::Span( void ):N(0) {

	return ;

}

Span::Span(unsigned int n) : N(n) {

	return ;

}

Span::Span( Span const & src ) {

	this->N = src.N;
	this->arr.clear();
	this->arr = src.arr;

	return ;

}

Span::~Span( void ) {

	this->arr.clear();

	return ;

}

Span & Span::operator=(Span const & rhs) {

	this->N = rhs.N;
	this->arr.clear();
	this->arr = rhs.arr;

	return *this;

}

void Span::addNumber(int elem) {

	if (this->arr.size() >= this->N)
		throw Span::FullArrayException();
	this->arr.push_back(elem);
	std::sort(this->arr.begin(), this->arr.end());

	return ;

}

void Span::addNumber(std::vector<int>::iterator begin,
		std::vector<int>::iterator end) {

	for (std::vector<int>::iterator it = begin; it != end; ++it) {
		if (this->arr.size() == this->N)
			throw Span::FullArrayException();
		this->arr.push_back(*it);
	}
	std::sort(this->arr.begin(), this->arr.end());

	return ;

}

unsigned int Span::shortestSpan( void ) {

	if (this->arr.size() < 2)
		throw Span::FindSpanException();
	std::vector<int>tmp(arr.size());
	std::copy(arr.begin(), arr.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[0];
	bool is_short = 0;
	for (size_t i = 1; i < tmp.size(); i++) {
		if (tmp[i] - tmp[i - 1] < shortest) {
			shortest = tmp[i] - tmp[i - 1];
			is_short = 1;
		}
	}
	if (is_short == 0)
		throw Span::FindSpanException();

	return shortest;

}

unsigned int Span::longestSpan( void ) {

	if (this->arr.size() < 2)
		throw Span::FindSpanException();
	int longest = this->arr.back() - this->arr.front();

	return longest;

}

const std::vector<int> & Span::getVector() const {

	return arr;

}

const char * Span::FullArrayException::what() const throw() {

	return "Array is full";

}

const char * Span::FindSpanException::what() const throw() {

	return "Span is not found";

}

std::ostream & operator<<(std::ostream & o, const Span & i) {

	std::vector<int>::const_iterator it = i.getVector().begin();
	for (; it < i.getVector().end(); it++) {
		o << *it << "\t";
	}

	return o;

}