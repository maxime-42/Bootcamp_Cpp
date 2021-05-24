/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:18:03 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 16:38:11 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"


AWeapon::AWeapon(/* args */){}
AWeapon::AWeapon(std::string const & name, int apcost, int damage):name(name), apcost(apcost), damage(damage){}

AWeapon::~AWeapon(){}

AWeapon::AWeapon(AWeapon const & toCopy)
{
	*this = toCopy;
}

std::string const AWeapon::getName() const {return (this->name);}

int AWeapon::getAPCost() const {return (this->apcost);}

int AWeapon::getDamage() const {return (this->damage);}

AWeapon & AWeapon::operator=(AWeapon const & toCopy)
{
	if (this != &toCopy)
	{
		this->name = toCopy.getName();
		this->damage = toCopy.getDamage();
		this->apcost = toCopy.getAPCost();
	}
	return (*this);
}
