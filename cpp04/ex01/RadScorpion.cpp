/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:32:25 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 15:47:30 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion(/* args */):Enemy(80, "RadScorpion")
{
	std::cout << CYN <<  "* click click click *" << NC << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << CYN << "* SPROTCH *" << NC << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & toCopy)
{
    *this = toCopy;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & toCopy)
{
        if (this != &toCopy)
        {
            Enemy::operator=(toCopy);
        }
        return (*this);
}

void RadScorpion::takeDamage(int domage)
{
	if (this->hp > 0)
	{
		this->hp -= domage;
		if (this->hp < 0)
			this->hp = 0;
	}
}