/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:37:48 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:37:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */):weapon(0),name(0){}

HumanB::HumanB(std::string name):weapon(0),name(name){}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	std::cout << GRN << "" << this->name << " attacks" << "" << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}