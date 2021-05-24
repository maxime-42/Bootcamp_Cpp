/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:19:44 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/14 14:00:52 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main(void)
{
	std::cout << NC << "*********************start*********************\n" << std::endl;

	FragTrap lenox("Lenox");
	NinjaTrap	jacky("Jacky");
	ClapTrap robert("Robert");
	ScavTrap nicky("Nicky");

	jacky.ninjaShoebox(lenox);
	std::cout << NC << "*********************new partie*********************\n" << std::endl;
	jacky.ninjaShoebox(robert);
	std::cout << NC << "*********************new partie*********************\n" << std::endl;

	jacky.ninjaShoebox(nicky);
	return (0);
}