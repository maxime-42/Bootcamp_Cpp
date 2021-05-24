/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:33:15 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:27:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name):Hit_points(100), Max_hit_points(100), Energy_points(100),
Max_energy_points(100), Level(1), Name(name), Melee_attack_damage(30), Ranged_attack_damage(20),
Armor_damage_reduction(5)
{
	std::cout << BG_GRN << "ClapTrap Birth name is " << this->Name << NC << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	*this = toCopy;
}

ClapTrap & ClapTrap::operator=(ClapTrap  const & toCopy)
{
	if (this != &toCopy)
	{
		this->Hit_points = toCopy.Hit_points;
		this->Max_hit_points = toCopy.Max_hit_points;
		this->Energy_points = toCopy.Energy_points;
		this->Max_energy_points = toCopy.Max_energy_points;
		this->Level = toCopy.Level;
		this->Name = toCopy.Name;
		this->Melee_attack_damage = toCopy.Melee_attack_damage;
		this->Ranged_attack_damage = toCopy.Ranged_attack_damage;
		this->Armor_damage_reduction = toCopy.Armor_damage_reduction;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << BG_GRN << "ClapTrap " << this->Name << " Died" << NC << "\n"<< std::endl;
}

std::string ClapTrap::getName(void){return (this->Name);}

void	ClapTrap::rangedAttack(std::string const & target)
{
	// FR4G-TP <name> attacks <target> at range, causing <damage> points of damage!
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage" << NC << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage" << NC << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points >= 0)
	{
		std::cout << BLUE << "ClapTrap " << this->Name << " has been attacked, he undergo " << amount << " points of damage..." << NC << std::endl;
		this->Hit_points -= (amount - this->Armor_damage_reduction);
		this->Energy_points -= amount;
		if (this->Hit_points < 0)
			this->Hit_points = 0;
		else if (this->Energy_points < 0)
			this->Energy_points = 0;
	}
	else
		std::cout << BLUE << "ClapTrap " << this->Name << " I already have zero hit point" << NC << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << MAGENTA << "ClapTrap " << this->Name << " is in progress repairing " << NC << std::endl;
	this->Hit_points += amount;
	this->Energy_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;

}

void	ClapTrap::reductEnergy(int nb){this->Energy_points -= nb;}

int	ClapTrap::getHitPoints(){return (this->Hit_points);}
int	ClapTrap::getEnergy_points(){return (this->Energy_points);}



