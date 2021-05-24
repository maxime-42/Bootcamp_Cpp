/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:16:16 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/19 10:21:08 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(/* args */){}

Enemy::Enemy(int hp, std::string const & type):hp(hp), type(type)
{
	// std::cout << BLUE << "birth Enemy"  << std::endl;
}

Enemy::~Enemy()
{
	// std::cout << BLUE << "Enemy died"  << std::endl;
}

Enemy::Enemy(Enemy const & toCopy)
{
        *this = toCopy;
}

std::string const Enemy::getType() const {return (this->type);}

int Enemy::getHP() const {return (this->hp);}

Enemy & Enemy::operator=(Enemy const & toCopy)
{
        if (this != &toCopy)
        {
                this->hp = toCopy.getHP();
                this->type = toCopy.getType();
        }
        return (*this);
}

// void Enemy::takeDamage(int domage)
// {
// 	if (domage >  0)
// 	{
// 		this->hp -= domage;
// 	}
// }
void Enemy::takeDamage(int domage)
{
	this->hp -= domage;
	if (this->hp  <  0)
	{
		this->hp= 0;
		delete this;
	}
}

void Enemy::setHP(int hp)
{
	this->hp = hp;
}
