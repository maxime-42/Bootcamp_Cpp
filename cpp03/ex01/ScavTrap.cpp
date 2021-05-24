/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:34:58 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 12:03:00 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */){}

ScavTrap::ScavTrap(std::string name):Hit_points(100), Max_hit_points(100), Energy_points(50),
Max_energy_points(50), Level(1), Name(name), Melee_attack_damage(20), Ranged_attack_damage(15),
Armor_damage_reduction(3)
{
	std::cout << GRN << "ScavTrap Birth name is " << this->Name << NC << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy)
{
	*this = toCopy;
}

ScavTrap & ScavTrap::operator=(ScavTrap  const & toCopy)
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

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << this->Name << " Died" << NC << std::endl;
}


std::string ScavTrap::getName(void){return (this->Name);}

void	ScavTrap::rangedAttack(std::string const & target)
{
	// ScavTrap <name> attacks <target> at range, causing <damage> points of damage!
	std::cout << "ScavTrap " << this->Name << " attacks " << target << "at range, causing " << this->Ranged_attack_damage << " points of damage" << NC << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << this->Name << " attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage" << NC << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points >= 0)
	{
		std::cout << BLUE << "ScavTrap " << this->Name << " has been attacked, he undergo " << amount << " points of damage..." << NC << std::endl;
		this->Hit_points -= (amount - this->Armor_damage_reduction);
		this->Energy_points -= amount;
		if (this->Hit_points < 0)
			this->Hit_points = 0;
		else if (this->Energy_points < 0)
			this->Energy_points = 0;
	}
	else
		std::cout << BLUE << "ScavTrap " << this->Name << " I already have zero hit point" << NC << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << MAGENTA << "ScavTrap " << this->Name << " is in progress repairing " << NC << std::endl;
	this->Hit_points += amount;
	this->Energy_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;

}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->Energy_points > 25)
	{
		std::string  const randomAttack[5] = {"Knuckleduster","Stick","Machete","kalashnikov"," Flails"};
		int index = rand() % 5;
		std::cout << this->Name << " random attacks  " << target << " with " << randomAttack[index] << NC << std::endl;
		this->Energy_points -= 25;
	}
	else
	{
		std::cout << YELLOW << "ScavTrap " << "I have not enought energy points : " << this->Energy_points  << std::endl;
	}
}

void	ScavTrap::reductEnergy(int nb){this->Energy_points -= nb;}

int	ScavTrap::getHitPoints(){return (this->Hit_points);}
int	ScavTrap::getEnergy_points(){return (this->Energy_points);}