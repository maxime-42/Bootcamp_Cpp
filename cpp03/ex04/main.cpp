/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:19:44 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 12:21:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap lenox("Lenox");
	NinjaTrap axel("Axel");
	axel.ninjaShoebox(lenox);
	lenox.vaulthunter_dot_exe(axel.getName());
	return (0);
}