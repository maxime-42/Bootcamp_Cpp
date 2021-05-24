/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 09:06:48 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 12:50:53 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
#define ZOMBIEEVENT
#include <string>
#include <iostream>
#include "Zombie.hpp"
#include <time.h>
#include <stdlib.h>
#define MAX_RANDOM 21

class ZombieEvent
{
private:
	std::string type;
public:
	ZombieEvent(/* args */);
	~ZombieEvent();
	void 	setZombieType(std::string type);
	Zombie * newZombie(std::string name);
	std::string	chooseRandomly(std::string const &str);
	void	randomChump();


};
#endif // !
