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

#include "whatever.hpp"
#include <iostream>

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN() const { return this->_n; }
private:
	int _n;
};

int main( void ) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	float e = 2.1f;
	float f = 3.2f;
	::swap( e, f );
	std::cout << "e = " << e << "f" << ", f = " << f << "f" << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << "f" << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << "f" << std::endl;
	double g = 2.3;
	double h = 3.4;
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	Awesome x(20);
	Awesome y(120);
	::swap( x, y );
	std::cout << "x = " << x.getN() << ", y = " << y.getN() << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ).getN() << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ).getN( ) << std::endl;

	return 0;

}
