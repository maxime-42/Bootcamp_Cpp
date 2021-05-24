/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:47:57 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/19 10:41:33 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){};

Character::Character(std::string const & name):name(name), ap(40), aweapon(NULL)
{
	// std::cout << RED << "birth character" << NC << std::endl;
}

std::string const Character::getName() const {return (this->name);}


// int  Character::getAp() const {return (this->ap);}

Character::~Character()
{
	// std::cout << "wshhhhhhhhhhhhhh" << std::endl;
	// std::cout << "* SPROTCH *" << std::endl;	
}

Character::Character(Character const & toCopy)
{
    *this = toCopy;
}

Character & Character::operator=(Character const & toCopy)
{
        if (this != &toCopy)
        {
                this->name = toCopy.getName();
                this->ap = toCopy.getAp();
                this->aweapon = toCopy.getAweapon();
        }
        return (*this);
}

void Character::recoverAP()
{
	if (this->ap < 40)
	{
		this->ap += 10;
		if (this->ap > 40)
			this->ap = 40;
	}
}

void	 Character::attack(Enemy* enemy)
{
	if ( this->ap < this->aweapon->getAPCost())
			std::cout << RED << "\nNot enough energie to attack, i need recovery !\n" << NC << std::endl;
	else if (this->aweapon)
	{
		std::cout << this->name << " attacks "  << enemy->getType() << " with a " << this->aweapon->getName() << std::endl;
		this->aweapon->attack();
		this->ap -= this->aweapon->getAPCost();
		if ( this->ap < 0)
			this->ap = 0;
		int aweaponDomage = this->aweapon->getDamage();
		enemy->takeDamage(aweaponDomage);
	}
}

void Character::equip(AWeapon *aweapon)
{
	this->aweapon = aweapon;
}

int  Character::getAp() const
{
	return (this->ap);
}

AWeapon *Character::getAweapon()const
{
	return (this->aweapon);	
}

std::ostream & operator<<(std::ostream & output, Character const & character)
{
	output  << character.getName() << " has " << character.getAp() << " AP and ";
	AWeapon *aweapon = character.getAweapon();
	if (aweapon)
	{
		output << "wields a " << aweapon->getName() <<  std::endl;
	}
	else
		output << " is unarmed" << std::endl;
	return (output);
}

