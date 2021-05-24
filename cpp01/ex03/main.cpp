/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:16:23 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 16:23:06 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include<stdio.h>

#include <string>


int main()
{
	std::string 	input;
	std::cout << GRN << "\tHow many zombie do you need :\n\t➜ ";	
	while (std::getline (std::cin,input))
	{
		if (!isdigit(input[0]))
			std::cout << RED << "Enter a digit number please" << std::endl;
		else
			break ;
	}
	int nbZombie = std::atoi(input.c_str());
	ZombieHorde zombieHorde(nbZombie);
    zombieHorde.announce();
    return (0);
}