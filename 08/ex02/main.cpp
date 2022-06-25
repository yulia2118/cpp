/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:32:13 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:32:15 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main() {

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "After remove top element (17) size of Mutantstack equal: ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "first element: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "last element: " << *(ite - 1) << std::endl;
	++it;
	std::cout << "after increment: " << *it << std::endl;
	--it;
	std::cout << "after decrement: " << *it << std::endl;
	std::cout << "All elements:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "New stack:" << std::endl;
	MutantStack<int> mstack2(mstack);
	mstack2.pop();
	mstack2.push(21);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "One more stack:" << std::endl;
	MutantStack<int> mstack3;
	mstack3 = mstack;
	mstack3.pop();
	mstack3.pop();
	MutantStack<int>::iterator it3 = mstack3.begin();
	MutantStack<int>::iterator ite3 = mstack3.end();
	while (it3 != ite3) {
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << "Old stack:" << std::endl;
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	while (it1 != ite1) {
		std::cout << *it1 << std::endl;
		++it1;
	}

	return 0;

}
