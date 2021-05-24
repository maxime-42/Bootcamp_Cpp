/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:29:40 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:30:26 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP
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
#define BG_GRN "\e[42m"
#define BG_BLUE "\e[46m"
#define BG_GRAY "\e[47m"
#define BG_MAGENTA "\e[45m"
#define FG_BLACK "\e[30m"
#define PINK "\e[38;5;198"

class ClapTrap
{
protected:
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
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const & toCopy );
	ClapTrap &	operator=(ClapTrap  const & toCopy);
	std::string	getName(void);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		beRepaired(unsigned int amount);
	void		takeDamage(unsigned int amount);
	int			getHitPoints();
	int			getEnergy_points();
	void		setEnergy_points(int nb);
	void		reductEnergy(int nb);
};

#endif // !