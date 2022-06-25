/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:24:00 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:24:02 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource {

public:

	virtual ~IMateriaSource( void ) {}

	virtual void learnMateria( AMateria * m ) = 0;
	virtual AMateria * createMateria( std::string const & type ) = 0;

};

#endif
