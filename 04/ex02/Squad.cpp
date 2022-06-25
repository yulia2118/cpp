/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:15:43 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:15:44 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad( void ) {

	count = 0;
	list = nullptr;

	return ;

}

void Squad::destroy( t_list * lst ) {

	if (!lst)
		return ;
	t_list *toDelete = lst->next;
	delete(lst->content);
	delete(lst);
	if (toDelete)
		destroy(toDelete);

	return ;

}

t_list * Squad::create( ISpaceMarine * content ) {

	t_list *list = new t_list;
	list->content = content;
	list->next = nullptr;

	return list;

}

Squad::Squad( Squad const & src )
{
	t_list *result;
	t_list *iterator;

	count = src.count;
	if (src.list) {
		iterator = src.list;
		result = create(iterator->content->clone());
		list = result;
		iterator = iterator->next;
		while (iterator) {
			result->next = create(iterator->content->clone());
			result = result->next;
			iterator = iterator->next;
		}
	}

	return ;

}

Squad::~Squad( void ) {

	count = 0;
	destroy(list);
	list = nullptr;

	return ;

}

Squad & Squad::operator=( Squad const & rhs ) {

	t_list *result;
	t_list *iterator;

	if (list) {
		destroy(list);
		list = nullptr;
	}
	count = rhs.count;
	if (rhs.list)
	{
		iterator = rhs.list;
		result = create(iterator->content->clone());
		list = result;
		iterator = iterator->next;
		while (iterator)
		{
			result->next = create(iterator->content->clone());
			result = result->next;
			iterator = iterator->next;
		}
	}

	return *this;

}

int Squad::getCount( void ) const {

	return this->count;

}

ISpaceMarine * Squad::getUnit( int index ) const {

	int j = 0;
	t_list *iterator;

	if (index < 0)
		return nullptr;
	iterator = list;
	while (j != index && iterator) {
		j++;
		iterator = iterator->next;
	}
	if (j == index && iterator)
		return (iterator->content);

	return nullptr;
}

int Squad::push( ISpaceMarine * marine ) {

	if (!marine)
		return this->count;
	if (!list)
		list = create(marine);
	else {
		t_list *iterator;
		iterator = list;
		while (iterator->next && iterator->content != marine)
			iterator = iterator->next;
		if (iterator->content == marine)
			return this->count;
		iterator->next = create(marine);
	}
	this->count++;

	return this->count;

}
