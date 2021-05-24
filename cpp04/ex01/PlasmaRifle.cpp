/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:39:47 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/19 08:52:20 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(/* args */):AWeapon("Plasma Rifle", 5, 21)
{
	// std::cout << GRN <<  "Creation Plasma Rifle " << NC << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	// std::cout <<  GRN << "dead Plasma Rifle " << NC << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & toCopy)
{
	*this = toCopy;
}

PlasmaRifle	&	PlasmaRifle::operator=(PlasmaRifle const & toCopy)
{
	if (this != &toCopy)
	{
		AWeapon::operator=(toCopy);		
	}
	return (*this);
}

void	PlasmaRifle::attack() const 
{
	std::cout << GRN <<  "* piouuu piouuu piouuu *" << NC << std::endl;
}