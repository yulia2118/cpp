/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:34 by fdarrin           #+#    #+#             */
/*   Updated: 2021/05/26 23:59:35 by fdarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <ctime>

class FragTrap: virtual public ClapTrap {

public:

	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs );

	void vaulthunter_dot_exe( std::string const & target );

};

#endif
