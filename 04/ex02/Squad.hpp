/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 21:15:31 by fdarrin           #+#    #+#             */
/*   Updated: 2021/06/03 21:15:33 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct	s_list {
	ISpaceMarine	*content;
	struct s_list	*next;
}				t_list;

class Squad : public ISquad {

private:

	int	count;
	t_list	*list;

	static void	destroy( t_list * lst );
	static t_list * create( ISpaceMarine * content );

public:

	Squad( void );
	Squad( Squad const & src );
	~Squad( void );

	virtual Squad & operator=( Squad const & rhs );

	virtual int getCount( void ) const;
	virtual ISpaceMarine * getUnit( int index ) const;
	virtual int push( ISpaceMarine * marine );

};

#endif
