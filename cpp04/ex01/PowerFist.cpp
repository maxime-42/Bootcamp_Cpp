/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:01:00 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 15:21:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(/* args */):AWeapon("Power Fist", 8, 50)
{
	// std::cout << MAGENTA << "Creation PowerFist " <<  NC << std::endl;
}

PowerFist::~PowerFist()
{
	// std::cout << MAGENTA <<  "PowerFist died" <<  NC << std::endl;
}

PowerFist::PowerFist(PowerFist const & toCopy)
{
	*this = toCopy;
}

PowerFist	&	PowerFist::operator=(PowerFist const & toCopy)
{
	if (this != &toCopy)
	{
		AWeapon::operator=(toCopy);		
	}
	return (*this);
}

void	PowerFist::attack() const 
{
	std::cout << MAGENTA << "* pschhh... SBAM! *" << NC << std::endl;
}