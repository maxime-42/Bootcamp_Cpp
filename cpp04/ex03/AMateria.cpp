/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:23:49 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 14:06:14 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


// AMateria::AMateria(/* args */){}

AMateria::AMateria(std::string const & type):type(type), _xp(0){}

AMateria::AMateria(AMateria const & toCopy)
{
	*this = toCopy;
}

AMateria		&AMateria::operator=( AMateria const &toCopy)
{
	if (this != &toCopy)
	{
		this->_xp = toCopy.getXP();
	}
	return (*this);
}


AMateria::~AMateria(){}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}
std::string const & AMateria::getType() const
{
	return (this->type);	
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
