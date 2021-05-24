/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:55:41 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:42:15 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP
# define SUPERTRAP

# include <iostream>
// # include "ClapTrap.hpp"
// # include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
// private:
// 	/* data */
public:
	SuperTrap(/* args */);
	~SuperTrap();
	SuperTrap(std::string name);
	SuperTrap( const SuperTrap & toCopy );
	SuperTrap			&operator=(SuperTrap const &toCopy);
};


#endif // !1