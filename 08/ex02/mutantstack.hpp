/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 20:32:51 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/19 20:32:53 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <string>
# include <iostream>
# include <deque>
# include <stack>
# include <algorithm>

template <class T>
class MutantStack : public std::stack<T> {

public:

	MutantStack() : std::stack<T>(){};
	MutantStack(MutantStack const & src) : std::stack<T>(src){};
	virtual ~MutantStack(){};

	MutantStack & operator=(MutantStack const & rhs){this->c = rhs.c; return
												  *this;};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typename MutantStack::iterator begin(){ return this->c.begin();};
	typename MutantStack::iterator end(){ return this->c.end();};

};

#endif
