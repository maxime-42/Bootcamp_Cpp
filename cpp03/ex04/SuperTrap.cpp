/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:06:58 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:36:48 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(){}

SuperTrap::~SuperTrap()
{
}

SuperTrap::SuperTrap(std::string name):ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
        std::cout << BG_MAGENTA << FG_BLACK << "Birth SuperTrap name is  " << this->Name << ", he has got two special attacks\n" << NC  << std::endl;
    	this->Hit_points = FragTrap::Hit_points;
        this->Max_hit_points = FragTrap::Max_hit_points;
        this->Energy_points = NinjaTrap::Energy_points;
        this->Max_energy_points = NinjaTrap::Max_energy_points;
        this->Level = 1;
        this->Name = name;
        this->Melee_attack_damage = NinjaTrap::Melee_attack_damage;
        this->Ranged_attack_damage = FragTrap::Melee_attack_damage;
        this->Armor_damage_reduction = FragTrap::Armor_damage_reduction;
        this->Ranged_attack_damage = FragTrap::Ranged_attack_damage;

}

SuperTrap::SuperTrap( const SuperTrap & toCopy )
{
	*this = toCopy;
}

SuperTrap			&SuperTrap::operator=(SuperTrap const &toCopy)
{
	ClapTrap::operator=(toCopy);
	return (*this);
}
