/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:35:09 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:37:50 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB
#define GRN "\e[0;32m"
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
	HumanB(/* args */);
public:
	~HumanB();
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon *weapon);

};

#endif // HUMANB