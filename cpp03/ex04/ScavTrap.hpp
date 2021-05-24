/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:10:33 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:36:44 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP
#define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(/* args */);
	~ScavTrap();
	ScavTrap(std::string  name);
	ScavTrap(ScavTrap const & toCopy);
	ScavTrap			& operator=(ScavTrap const & toCopy);
	void    			challengeNewcomer(std::string const & target);


};


#endif // !