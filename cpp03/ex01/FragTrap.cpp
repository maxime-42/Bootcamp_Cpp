/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:46:02 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:46:31 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name):Hit_points(100), Max_hit_points(100), Energy_points(100),
Max_energy_points(100), Level(1), Name(name), Melee_attack_damage(30), Ranged_attack_damage(20),
Armor_damage_reduction(5)
{
	std::cout << GRN << "FR4G-TP Birth name is " << this->Name << NC << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy)
{
	*this = toCopy;
}

FragTrap & FragTrap::operator=(FragTrap  const & toCopy)
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

FragTrap::~FragTrap()
{
	std::cout << RED << "FR4G-TP " << this->Name << " Died" << NC << std::endl;
}

std::string FragTrap::getName(void){return (this->Name);}

void	FragTrap::rangedAttack(std::string const & target)
{
	// FR4G-TP <name> attacks <target> at range, causing <damage> points of damage!
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << "at range, causing " << this->Ranged_attack_damage << " points of damage" << NC << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage" << NC << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points >= 0)
	{
		std::cout << BLUE << "FR4G-TP " << this->Name << " has been attacked, he undergo " << amount << " points of damage..." << NC << std::endl;
		this->Hit_points -= (amount - this->Armor_damage_reduction);
		this->Energy_points -= amount;
		if (this->Hit_points < 0)
			this->Hit_points = 0;
		else if (this->Energy_points < 0)
			this->Energy_points = 0;
	}
	else
		std::cout << BLUE << "FR4G-TP " << this->Name << " I already have zero hit point" << NC << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << MAGENTA << "FR4G-TP " << this->Name << " is in progress repairing " << NC << std::endl;
	this->Hit_points += amount;
	this->Energy_points += amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = this->Max_hit_points;

}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->Energy_points > 25)
	{
		std::string  const randomAttack[5] = {"Hammer","Gun","Bayonet","Hatchet","Knife"};
		int index = rand() % 5;
		std::cout << this->Name << " random attacks  " << target << " with " << randomAttack[index] << NC << std::endl;
		this->Energy_points -= 25;
	}
	else
	{
		std::cout << YELLOW << "FR4G-TP " << "I have not enought energy points : " << this->Energy_points  << std::endl;
	}
}

void	FragTrap::reductEnergy(int nb){this->Energy_points -= nb;}

int	FragTrap::getHitPoints(){return (this->Hit_points);}
int	FragTrap::getEnergy_points(){return (this->Energy_points);}



