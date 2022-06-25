/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:31:57 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:31:58 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>
# include <iterator>
# include <vector>
# include <ctime>
# include <algorithm>

class Span {

private:

	std::vector<int> arr;
	unsigned int N;

	Span( void );

public:

	Span( unsigned int n );
	Span( Span const & src );
	~Span( void );

	Span & operator=( Span const & rhs );

	void addNumber(int elem);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator
	end);

	unsigned int shortestSpan( void );
	unsigned int longestSpan( void );

	const std::vector<int> & getVector() const;

	class FullArrayException : public std::exception  {
	public:
		const char *what() const throw();
	};
	class FindSpanException : public std::exception  {
	public:
		const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Span const & i);

#endif
