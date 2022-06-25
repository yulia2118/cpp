/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:22:48 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:22:50 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria {

protected:

	std::string _type;
	unsigned int _xp;

	AMateria( void );

public:

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria & operator=( AMateria const & rhs );

	std::string const & getType( void ) const;
	unsigned int getXP( void ) const;
	virtual AMateria * clone( void ) const = 0;
	virtual void use( ICharacter & target );

};

#endif
