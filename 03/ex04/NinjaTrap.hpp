/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:34 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:35 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include <ctime>

class NinjaTrap: virtual public ClapTrap {

public:

	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap & operator=( NinjaTrap const & rhs );

	void ninjaShoebox( FragTrap & frag );
	void ninjaShoebox( ScavTrap & scav );
	void ninjaShoebox( NinjaTrap & ninja );

};

#endif
