/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:46:48 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:59:26 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */){}

FragTrap::FragTrap(std::string  name):ClapTrap(name)
{
	std::cout << BG_BLUE << "birth FragTrap  name is " << this->Name <<  NC << "\n" << std::endl;
	this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 100;
    this->Max_energy_points = 100;
    this->Level = 1;
    this->Name = name;
    this->Melee_attack_damage = 30;
    this->Ranged_attack_damage = 25;
    this->Armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << RED << BG_BLUE << "FragTrap " << this->Name << " Died" << NC "\n" << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy)
{
    *this = toCopy;
}

FragTrap			&FragTrap::operator=(FragTrap const & toCopy)
{
	ClapTrap::operator=(toCopy);
	return (*this);
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->Energy_points > 25)
	{
    	std::string  const randomAttack[5] = {"Hammer","Gun","Bayonet","Hatchet","Knife"};
        int index = rand() % 5;
        std::cout << this->Name << " vaulthunter_dot_exe special random attacks on " << target << " with " << randomAttack[index] << NC << std::endl;
        this->Energy_points -= 25;
    }
    else
    {
    	std::cout << YELLOW << "FR4G-TP " << "I have not enought energy points : " << this->Energy_points  << std::endl;
    }
}