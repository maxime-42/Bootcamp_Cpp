/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:33:58 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 16:39:36 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(/* args */){}

Sorcerer::Sorcerer(std::string name, std::string title):name(name), title(title)
{
	std::cout << GRN << this->name << ", " << this->title << " , is born!" << NC << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << GRN << this->name << ", " << this->title << ", is dead. Consequences will never be the same!"  << NC << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & toCopy)
{
	*this = toCopy;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & toCopy)
{
	if (this != &toCopy)
	{
		this->name = toCopy.name;
		this->title = toCopy.title;
	}
	return (*this);
}

std::string Sorcerer::getName()const{return (this->name);}
std::string Sorcerer::getTitle()const{return (this->title);}

std::ostream &			operator<<( std::ostream & ouput, Sorcerer const &  sorcerer)
{
	ouput << GRN << "I am, " << sorcerer.getName() << ", " << sorcerer.getTitle() << " and I like ponies!" << GRN  << std::endl ;
	return (ouput);
}

void Sorcerer::polymorph(Victim const &victim) const 
{
	victim.getPolymorphed();
}