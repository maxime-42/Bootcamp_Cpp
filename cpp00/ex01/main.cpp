/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:01:17 by mkayumba          #+#    #+#             */
/*   Updated: 2021/03/08 16:16:01 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>  

int main(int argc, const char** argv) 
{
	std::string	command;
	Phonebook phonebook(0);
	while (!phonebook.exit)
	{
		std::cout << CYN "Enter Command : ADD, SEARCH, EXIT\n\t ➜";
		getline(std::cin, command);
		if (!command.compare("ADD"))
		{
			phonebook.add_contact();
		}
		else if (!command.compare("SEARCH"))
			phonebook.search();
		else if (!command.compare("EXIT"))
			phonebook.my_exit(1);
	}
	return (0);
}