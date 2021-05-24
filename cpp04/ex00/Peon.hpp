/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:23:59 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 16:21:29 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON
#define PEON
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

class Peon : public Victim
{
private:
	Peon(/* args */);
public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(Peon const & toCopy);
	Peon	&		operator=(Peon const & toCopy);
	virtual void	getPolymorphed() const;
};



#endif // !