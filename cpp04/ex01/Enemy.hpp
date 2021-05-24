/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 09:58:42 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 18:06:27 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY
#define ENEMY
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

class Enemy
{
protected:
	int hp;
	std::string  type;
	// std::string const & type; dans le sujet c'est const
public:
	Enemy(/* args */);
	Enemy(Enemy const & toCopy);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	void setHP(int hp);
	void takeDamage(int);
	Enemy & operator=(Enemy const & toCopy);

};

#endif // !1