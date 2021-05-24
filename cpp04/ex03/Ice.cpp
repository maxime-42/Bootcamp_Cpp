/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:40:08 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 14:44:56 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */):AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &toCopy):AMateria("ice")
{
	*this = toCopy;
}

Ice & Ice::operator=(Ice const &toCopy)
{
	if (this != &toCopy)
	{
		AMateria::operator=(toCopy);
	}
	return (*this);
}

AMateria * Ice::clone()const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& character)
{
	AMateria::use(character);
	std::cout << "* shoots an ice bolt at " << character.getName() << " *" <<std::endl;
}