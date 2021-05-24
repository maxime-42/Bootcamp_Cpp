/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:41:58 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 10:27:30 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON
#define AWEAPON
#include <string>
#include <iostream>
#include <iostream>
#include <time.h>
#include <stdlib.h>
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

class AWeapon
{
protected:
	std::string	name;//dans le sujet c'est const name
	int apcost;
	int damage;
public:
	AWeapon(/* args */);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon & operator=(AWeapon const & toCopy);
	AWeapon(AWeapon const & toCopy);
};
#endif //!