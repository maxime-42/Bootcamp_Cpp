/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:36:39 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/09 17:21:26 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE
#define ZOMBIE
#include <string>
#include <iostream>
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
class Zombie
{
private:
	std::string  type;
	std::string  name;
public:
	Zombie(/* args */);
	Zombie(std::string type, std::string name);
	~Zombie();
	void announce();
	void	setName(std::string name);
	void	setType(std::string type);
};



#endif // !1
