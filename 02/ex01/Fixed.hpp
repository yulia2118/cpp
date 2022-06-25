/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:19:04 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 19:19:06 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed( void );
	Fixed(Fixed const &cpy);
	Fixed( int const num );
	Fixed( float const num );
	~Fixed( void );

	Fixed &	operator=(  Fixed const & rhs );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int _value;
	static int const _bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & fix );

#endif
