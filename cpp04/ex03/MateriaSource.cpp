/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:42:35 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 15:01:24 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	this->iteratorSource = 0;
	for (size_t i = 0; i < 4; i++)
	{
		this->source[i] = NULL;
	}
	
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->source[i] ;
	}
}

MateriaSource::MateriaSource(MateriaSource const & toCopy)
{
	*this = toCopy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & toCopy)
{
	if (this != &toCopy)
	{
		this->iteratorSource = toCopy.iteratorSource;
		for (size_t i = 0; i < 4; i++)
		{
			this->source[i] = toCopy.source[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *amateria)
{
	if (this->iteratorSource < 4)
	{
		// std::cout << "\nlearnMateria\n" << std::endl;
		this->source[this->iteratorSource] = amateria;
		this->iteratorSource += 1;
		// std::cout << "amateria->getType() " << amateria->getType() << std::endl;
	}
}

AMateria*  MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->source[i] != NULL)
		{
			if (this->source[i]->getType() == type)
			{
				// std::cout << "pas nulll" << std::endl;
				return (this->source[i]->clone());
			}
		}
	}
	return (NULL);
}