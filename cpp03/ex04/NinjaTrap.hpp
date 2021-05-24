/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:34:57 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:36:22 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP
#define NINJATRAP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(/* args */);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const & toCopy);
	NinjaTrap & operator=(NinjaTrap const & toCopy);
	NinjaTrap(std::string name);
	void	ninjaShoebox(ClapTrap & claptrap);
	void 	ninjaShoebox(FragTrap & fragtrap);
	void	ninjaShoebox(ScavTrap & scavtrap);


};

#endif // !