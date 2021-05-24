/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:13:10 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 12:00:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */){}

ScavTrap::ScavTrap(std::string  name):ClapTrap(name)
{
	std::cout << BG_GRAY << "ScavTrap birth name is " << this->Name << NC << "\n" << std::endl;
	this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->Level = 1;
    this->Name = name;
    this->Melee_attack_damage = 20;
    this->Ranged_attack_damage = 15;
    this->Armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << BG_GRAY << "ScavTrap " << this->Name << " Died" << NC << "\n"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy)
{
    *this = toCopy;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const & toCopy)
{
	ClapTrap::operator=(toCopy);
	return (*this);
}



void    ScavTrap::challengeNewcomer(std::string const & target)
{
        if (this->Energy_points > 25)
        {
                std::string  const randomAttack[5] = {"Knuckleduster","Stick","Machete","kalashnikov"," Flails"};
                int index = rand() % 5;
                std::cout << this->Name << " challengeNewcomer Special random attacks  on " << target << " with " << randomAttack[index] << NC << std::endl;
                this->Energy_points -= 25;
        }
        else
        {
                std::cout << YELLOW << "FR4G-TP " << "I have not enought energy points : " << this->Energy_points  << std::endl;
        }
}