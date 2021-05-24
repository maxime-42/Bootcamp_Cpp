/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:36:20 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:33:11 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(/* args */){}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	std::cout << BG_MAGENTA << FG_BLACK << "NinjaTrap Birth name is  " << this->Name << NC << "\n" << std::endl;
	this->Hit_points = 60;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 120;
	this->Name = name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << RED << BG_GRN << "NinjaTrap " << this->Name << " Died" << NC << "\n"<< std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & toCopy)
{
    *this = toCopy;
}

NinjaTrap			&NinjaTrap::operator=(NinjaTrap const & toCopy)
{
	ClapTrap::operator=(toCopy);
	return (*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
	std::cout << BLUE << "ClapTrap " << claptrap.getName() << ", what do you can do, i'm the best ninja in the town ?" << NC << std::endl;
	claptrap.meleeAttack(this->getName());
	std::cout << BLUE <<"000H sh*t you attacked me with meleeAttack\n" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
	std::cout << BLUE << "FragTrap " << fragtrap.getName() << ", what do you can do, i'm the best ninja in the town ?" << NC << std::endl;
	fragtrap.rangedAttack(this->getName());
	std::cout << BLUE <<"000H sh*t you attacked me with rangedAttack\n" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
	std::cout << BLUE << "ClapTrap " << scavtrap.getName() << ", what do you can do, i'm the best ninja in the town ?" << NC << std::endl;
	scavtrap.challengeNewcomer(this->getName());
	std::cout << BLUE <<"000H sh*t you attacked me with challengeNewcomer\n" << std::endl;
}