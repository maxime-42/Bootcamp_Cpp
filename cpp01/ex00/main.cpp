/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:29:34 by nailambz          #+#    #+#             */
/*   Updated: 2021/04/08 17:35:43 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(std::string name, std::string color, std::string where)
{
    Pony    pony = Pony(name, color, where);
	pony.say();
}

void    ponyOnTheHeap(std::string name, std::string color, std::string where)
{
    Pony*    pony = new Pony(name, color, where);
	pony->say();
    delete pony;
}

int main()
{
    std::cout << "------ PONY ON THE STACK ------" << std::endl;
    ponyOnTheStack("Jack", "Red", "stack");
    std::cout << "------ PONY ON THE HEAP ------" << std::endl;
    ponyOnTheHeap("Pégase", "Yellow", "heap");
}
