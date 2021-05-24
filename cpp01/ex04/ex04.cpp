/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:45:51 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 18:09:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

#define REDB "\e[41m"
#define CYN "\e[0;36m"
#define YELLOW "\e[33m"
#define NC "\e[0m"
int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptrStr = &str;
	std::string &refStr = str;

	std::cout << YELLOW << "Pointer\n\t-> "  << *ptrStr << std::endl;
	std::cout << CYN << "Reference\n\t-> "  << refStr << std::endl;
	std::cout << NC << std::endl;
	return (0);
}