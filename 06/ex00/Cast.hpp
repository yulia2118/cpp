/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:58 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/13 16:30:00 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP
# include <string>
# include <iostream>

class Cast {

private:

	std::string _value;

public:

	Cast( void );
	Cast( std::string const value );
	Cast( Cast const & src );
	~Cast( void );

	Cast & operator=( Cast const & rhs );

	operator char( void ) const;
	operator int( void ) const;
	operator float( void ) const;
	operator double( void ) const;

	class CastException : public std::exception {
	public:
		const char * what() const throw();
	};

};

#endif
