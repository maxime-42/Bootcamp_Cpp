/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:31:29 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 16:34:57 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(/* args */){}
Peon::Peon(std::string name):Victim(name)
{
	std::cout << YELLOW << "Zog zog." << NC << std::endl;
}

Peon::~Peon()
{
	std::cout << YELLOW << "Bleuark..." << NC <<std::endl;
}

Peon::Peon(Peon const & toCopy )
{
	*this = toCopy;
}

Peon &		Peon::operator=(Peon const & toCopy)
{
	if (this != &toCopy)
	{
		Victim::operator=(toCopy);
		return (*this);
	}
	return (*this);
}

void	Peon::getPolymorphed()const
{
	std::cout << YELLOW << this->getName() << " has been turned into a pink pony!" << NC << std::endl;
}