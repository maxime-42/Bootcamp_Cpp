/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:38:42 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/19 10:47:31 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim(/* args */){}

Victim::Victim(std::string name):name(name)
{
	std::cout << MAGENTA << "Some random victim called " << this->name  << " just appeared!" << NC << std::endl;
}

Victim::~Victim()
{
        std::cout << MAGENTA << "Victim " << this->name << " just died for no apparent reason!"  << NC << std::endl;
}

Victim::Victim(Victim const & toCopy)
{
    *this = toCopy;
}

Victim & Victim::operator=(Victim const & toCopy)
{
        if (this != &toCopy)
        {
                this->name = toCopy.name;
        }
        return (*this);
}

std::string Victim::getName()const{return (this->name);}

std::ostream &                  operator<<( std::ostream & ouput, Victim const &  victim)
{
        ouput << MAGENTA << "I am " << victim.getName() << " and I like otters!" << NC  << std::endl;
        return (ouput);
}

void	Victim::getPolymorphed()const 
{
	std::cout  << MAGENTA << this->name << " has been turned into a cute little sheep!" << NC << std::endl;
}