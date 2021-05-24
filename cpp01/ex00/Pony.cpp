/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:54:57 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/08 17:33:43 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(/* args */){}

Pony::Pony(std::string name, std::string color, std::string where):name(name), color(color), where(where)
{
	std::cout << YELLOW "Pony is born :" << std::endl;
	std::cout << YELLOW "\tname	➜ " << this->name << std::endl;
	std::cout << YELLOW "\tcolor	➜ " << this->color << std::endl;	
}

void Pony::say()
{
	std::cout << GRN "I am :\n\t" << this->name << std::endl;
	std::cout << GRN "\tMy color it	➜ " << this->color <<  std::endl;
	std::cout << GRN "\tI am on the	➜ " << this->where <<  std::endl;
	if (this->where == "stack")
		std::cout << GRN << " STACK it more faster than heap" << std::endl;
	else
		std::cout << GRN << "HEAP it slower than stack" << std::endl;
}

Pony::~Pony(){}