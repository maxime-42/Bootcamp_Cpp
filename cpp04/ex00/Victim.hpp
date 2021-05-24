/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:37:59 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 17:10:06 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM
#define VICTIM
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

class Victim
{
protected:
	std::string name;
	Victim(/* args */);
public:
	virtual ~Victim();
	Victim(std::string name);
    Victim & operator=(Victim const & toCopy);
    Victim(Victim const & toCopy);
    std::string getName()const;
	virtual void getPolymorphed()const;

};

std::ostream &  operator<<( std::ostream & ouput, Victim  const &  Victim);

#endif // !