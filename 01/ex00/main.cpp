/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:27:14 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/18 15:27:16 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *Heap;

	Heap = new Pony(1, "'Pony on the Heap'");
	Heap->information();
	delete Heap;
}

void ponyOnTheStack(void)
{
	Pony Stack(2, "'Pony on the Stack'");
	Stack.information();
}

int main(void) {
	std::cout << std::endl << "*********************************************"
	<< std::endl;
	std::cout << "Let me introduce you to the pony on the heap:" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "*********************************************"
	<< std::endl;
	std::cout << "Let me introduce you to the pony on the stack:" << std::endl;
	ponyOnTheStack();
	return (0);
}
