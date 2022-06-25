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

#include "Array.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void) {

	Array<int> arr1;
	Array<int> arr2(5);
	arr1 = arr2;
	for (size_t i = 0; i < arr1.size(); i++) {
		arr1[i] = i;
		std::cout << arr1[i] << std::endl;
	}
	try {
		arr1[10] = 42;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		arr1[-1] = 42;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Awesome arr6[5];
	for (size_t i = 0; i < 5; i++) {
		std::cout << arr6[i] << std::endl;
	}
	std::cout << std::endl;
	Array<std::string> arr3(5);
	for (size_t i = 0; i < 5; i++)
		arr3[i] = "Hello";
	for (size_t i = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << std::endl;
	std::cout << std::endl;
	Array<float> arr4(5);
	for (size_t i = 0; i < arr4.size(); i++) {
		arr4[i] = i + 0.1f;
		std::cout << arr4[i] << "f" << std::endl;
	}
	std::cout << std::endl;
	Array<double> arr5(5);
	for (size_t i = 0; i < arr5.size(); i++) {
		arr5[i] = i + 0.1;
		std::cout << arr5[i] << std::endl;
	}
	std::cout << std::endl;

	return 0;

}
