/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:33:42 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 17:32:08 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(/* args */):N(0), tabZombie(NULL){}

ZombieHorde::ZombieHorde(int N):N(N), tabZombie(NULL)
{
	std::string type;
	std::string name;
	this->tabZombie = new Zombie[this->N];
	for (size_t i = 0; (int)i < this->N; i++)
	{
		type = this->chooseRandomly("type", i);
		name = this->chooseRandomly("name", i);
		this->tabZombie[i].setName(name);
		this->tabZombie[i].setType(type);
	}
}

void ZombieHorde::announce()
{
	for (size_t i = 0; (int)i < this->N; i++)
	{
		this->tabZombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->tabZombie;
}
std::string             ZombieHorde::chooseRandomly(std::string const &str, int i)
{
        int index = 0;
        std::string  str_random; 
        std::string  const name[MAX_RANDOM] = {
        "jordan","obama","austin","olivier","zidane","neymar","zidane",
        "EAZY E","tupac","nippsey","pop smoke","darwin","trump","jimmy",
        "euler","nippsey hussle","macron","hawking","michael jackson","julio","Kobe" 
        };
        std::string type[MAX_RANDOM] = {
        "swimmer","ice man","rapper","superhuman speed","Be able to stop time","basketball player","vampir",
        "mafioso","prisoner","gangsta","Talk to the dead", "clever","Invisibility","Teleport",
        "Resurrect the dead","be able to travel in time", "Breath underwater", "auto-guérison ", "Crawler", 
        "Have night vision" , "Never get sick"
        };
        srand (time(NULL) + i);
        index = rand() % MAX_RANDOM ;
    if (str.compare("name") == 0)
                str_random = name[index];
        else if (str.compare("type") == 0)
                str_random = type[index];
        return (str_random);
}