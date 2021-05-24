/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:37:52 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 17:33:04 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */){}

void Zombie::announce()
{
	std::cout << YELLOW << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
Zombie::Zombie(std::string type, std::string name):type(type), name(name)
{
	std::cout << GRN << "Zombie born " << this->name << " (" << this->type << ") " << std::endl;
	
}
Zombie::~Zombie()
{
	std::cout << RED << " " << this->name << " (" << this->type << ") Died..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

// void Zombie::setType(std::string type, std::string type){this->type = type;}

