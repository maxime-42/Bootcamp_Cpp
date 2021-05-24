/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:31:45 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 16:17:44 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE
#define ZOMBIEHORDE
#define MAX_RANDOM 21
#include "Zombie.hpp"
#include <time.h>
#include <stdlib.h>
class ZombieHorde
{
private:
	int const N;
	Zombie *tabZombie;
	ZombieHorde(/* args */);
public:

	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
	std::string    chooseRandomly(std::string const &str, int i);

};

#endif // !1
