/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:09:46 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:44:11 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(/* args */){}

Weapon::Weapon(std::string type):type(type){}

Weapon::~Weapon(){}

std::string const & Weapon::getType()
{
	return (this->type);
}

void  Weapon::setType(std::string type)
{
	this->type = type;
}

