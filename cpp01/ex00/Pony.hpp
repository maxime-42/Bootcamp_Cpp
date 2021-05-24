/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:52:52 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/08 17:35:59 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY
#define PONY
#include <string>
#include <iostream>
#define YELLOW "\e[33m"
#define GRN "\e[0;32m"
#define RED "\e[0;31m"

class Pony
{
private:
	Pony();
	std::string name;
	std::string color;
	std::string where;

public:
	Pony(std::string name, std::string color, std::string where);
	void say();
	~Pony();
};

#endif //


