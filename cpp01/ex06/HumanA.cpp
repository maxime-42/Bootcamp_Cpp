/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:22:58 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:42:16 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon), name(name){}

void	HumanA::attack()
{
	std::cout << YELLOW << "" << this->name << " attacks" << "" << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(){}