/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:16:07 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/16 22:16:10 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contacts {

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	int have_data;

public:
	Contacts(void);
	~Contacts(void);

	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	int	check_data() const;
	void	clean_data(void);
	void	take_data(void);
	void	show_data(const std::string &str) const;

};

#endif
