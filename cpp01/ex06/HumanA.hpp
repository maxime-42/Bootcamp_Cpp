/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:21:14 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:43:56 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA
#define YELLOW "\e[33m"
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;
public:
	void	attack();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();	
};

#endif // !1