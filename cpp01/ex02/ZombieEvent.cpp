/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 09:08:22 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 12:33:28 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */):type(chooseRandomly("type")){}


ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type){this->type = type;}


Zombie * ZombieEvent::newZombie(std::string name)
{
	Zombie *ptrZombie = new Zombie(this->type, name);
	std::cout << "Create zombie on the heap" << std::endl;
	ptrZombie->announce();
	return (ptrZombie);
}

/*
**this function chose un random name ou type
** if str == type : return random un random type
** else if str == name : return random un random name
**
*/
std::string		ZombieEvent::chooseRandomly(std::string const &str)
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
	srand (time(NULL));
	index = rand() % MAX_RANDOM ;
    if (str.compare("name") == 0)
		str_random = name[index];
	else if (str.compare("type") == 0)
		str_random = type[index];
	return (str_random);
}

void	ZombieEvent::randomChump()
{
	std::string type = chooseRandomly("type");
	std::string name = chooseRandomly("name");
	Zombie zombieRandom(type ,name);
	zombieRandom.announce();
}