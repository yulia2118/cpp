/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:16:55 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/16 22:17:01 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class Phonebook {

private:
	Contacts	contact[8];

public:
	Phonebook(void);
	~Phonebook(void);

	void add_contact(void);
	void search_contact(void) const;
	void get_contact(int i) const;
	void clean_contacts(void);

};

#endif
