/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:56:09 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 18:24:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(/* args */):Enemy(170, "Super Mutant")
{
	std::cout << YELLOW <<  "Gaaah. Me want smash heads!" << NC << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << YELLOW << "Aaargh..." << NC << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & toCopy)
{
    *this = toCopy;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & toCopy)
{
        if (this != &toCopy)
        {
            Enemy::operator=(toCopy);
        }
        return (*this);
}


void SuperMutant::takeDamage(int domage)
{
	// if (this->hp > 0)
	// {
	// 	this->hp -= (domage - 3);
	// 	if (this->hp < 0)
	// 		this->hp = 0;
	// }
	Enemy::takeDamage(domage - 3);

}