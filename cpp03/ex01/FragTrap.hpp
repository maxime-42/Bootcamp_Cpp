/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:41:31 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:20:34 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#define BLUE "\e[34m"

class FragTrap
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
	FragTrap(/* args */);
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const & toCopy );
	FragTrap &	operator=(FragTrap  const & toCopy);
	std::string	getName(void);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		beRepaired(unsigned int amount);
	void		takeDamage(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
	int			getHitPoints();
	int			getEnergy_points();
	void		setEnergy_points(int nb);
	void		reductEnergy(int nb);
};

#endif // !