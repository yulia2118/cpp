/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:24:13 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:24:15 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	AMateria *_materias[4];
	int _slot;

	void clear( void );

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	virtual ~MateriaSource( void );

	MateriaSource & operator=( MateriaSource const & rhs );

	void learnMateria( AMateria * m );
	AMateria * createMateria( std::string const & type );

};

#endif
