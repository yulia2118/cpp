/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:31:48 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/17 16:31:50 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
template< typename T >
void fprint( T const & x ) { std::cout << x << "f" << std::endl; return; }

int main() {

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	std::cout << std::endl;
	std::string arr1[5] = { "one", "two", "three", "four", "five" };
	iter(arr1, 5, print);
	std::cout << std::endl;
	float arr2[5] = { 0.1f, 1.2f, 2.3f, 3.4f, 4.5f };
	iter(arr2, 5, fprint);
	std::cout << std::endl;
	double arr3[5] = { 0.1, 1.2, 2.3, 3.4, 4.5 };
	iter(arr3, 5, print);
	std::cout << std::endl;

	return 0;
}
