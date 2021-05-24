/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:32:32 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 15:18:31 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER
#define SORCERER
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#define BLUE "\e[34m"
#define BG_GRN "\e[42m"
#define BG_BLUE "\e[46m"
#define BG_GRAY "\e[47m"
#define BG_MAGENTA "\e[45m"
#define FG_BLACK "\e[30m"
#define PINK "\e[38;5;198"
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer(/* args */);
public:
	~Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer & operator=(Sorcerer const & toCopy);
	Sorcerer(Sorcerer const & toCopy);
	std::string getName()const;
	std::string getTitle()const;
	void polymorph(Victim const &) const ;
	
};

std::ostream &	operator<<( std::ostream & ouput, Sorcerer  const &  sorcerer);

#endif
