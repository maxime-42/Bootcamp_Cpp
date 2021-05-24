/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Thief.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:47:03 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 17:06:07 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Thief.hpp"

Thief::Thief(/* args */){}
Thief::Thief(std::string name):Victim(name)
{
	std::cout << CYN << "Hum Hum the thief arrives." << NC << std::endl;
}

Thief::~Thief()
{
	std::cout << CYN << "BAAm...tief dead" << NC <<std::endl;
}

Thief::Thief(Thief const & toCopy )
{
	*this = toCopy;
}

Thief &		Thief::operator=(Thief const & toCopy)
{
	if (this != &toCopy)
	{
		Victim::operator=(toCopy);
		return (*this);
	}
	return (*this);
}

void	Thief::getPolymorphed()const
{
	std::cout << CYN << this->getName() << " has been turned into a Dog!" << NC << std::endl;
}