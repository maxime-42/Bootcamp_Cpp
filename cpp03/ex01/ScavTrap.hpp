/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:31:28 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:17:38 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#define BLUE "\e[34m"

class ScavTrap
{
private:
	int Hit_points;
	int  Max_hit_points;
	int Energy_points;
	int  Max_energy_points;
	int Level;
	std::string  Name;
	int	Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
public:
	ScavTrap(/* args */);
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & toCopy);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		beRepaired(unsigned int amount);
	void		takeDamage(unsigned int amount);
	void		challengeNewcomer(std::string const & target);
	int			getHitPoints();
	int			getEnergy_points();
	void		setEnergy_points(int nb);
	void		reductEnergy(int nb);
	std::string getName(void);
	ScavTrap & operator=(ScavTrap  const & toCopy);

};
#endif