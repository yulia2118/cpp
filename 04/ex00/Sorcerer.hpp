/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:06:54 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:06:56 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

private:

	std::string	_name;
	std::string	_title;

	Sorcerer( void );

public:

	Sorcerer( std::string const & name, std::string const & title );
	Sorcerer( Sorcerer const & src );
	~Sorcerer( void );

	Sorcerer & operator=( Sorcerer const & rhs );

	std::string getName( void ) const;
	std::string getTitle( void ) const;
	void polymorph( Victim const & victim );

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & sorcerer );

#endif
