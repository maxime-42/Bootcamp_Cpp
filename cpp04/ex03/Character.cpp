/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:29:00 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 15:00:24 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
	this->iteratorInventory = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name):name(name)
{
	this->iteratorInventory = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}


Character::Character(Character const & toCopy)
{
	// this->operator=(toCopy);
	*this = toCopy;
}

std::string const & Character::getName()const
{
	return (this->name);
}

Character & Character::operator=(Character const &toCopy)
{
	if (this != &toCopy)
	{
		this->iteratorInventory = toCopy.iteratorInventory;
		this->name = toCopy.getName();
		int i = -1;
		while (++i < 4)
		{
			this->inventory[i] = 0;
		}
		i = -1;
		while (++i < 4)
		{
			this->inventory[i] = toCopy.inventory[i];
		}
	}
	return (*this);
}


void Character::equip(AMateria* m) 
{
	// if (this->iteratorInventory)
	// 	std::cout << "\nhellow\n" << std::endl;
	if (this->iteratorInventory < 4 && m && this->inventory[this->iteratorInventory] == NULL)
	{
		this->inventory[this->iteratorInventory++] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
}