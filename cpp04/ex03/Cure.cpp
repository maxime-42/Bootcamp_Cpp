/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:15:41 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 14:45:48 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure(/* args */):AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &toCopy):AMateria("cure")
{
	*this = toCopy;
}

Cure & Cure::operator=(Cure const &toCopy)
{
	if (this != &toCopy)
	{
		AMateria::operator=(toCopy);
	}
	return (*this);
}

AMateria * Cure::clone()const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& character)
{
	AMateria::use(character);
	std::cout << "* heals " << character.getName() <<"’s wounds *" << std::endl;
}