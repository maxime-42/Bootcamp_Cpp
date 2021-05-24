/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:46:54 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 16:17:43 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */){}

std::string  const Brain::identify()const
{
	std::stringstream ss;
	std::string addrString;
	ss << this;
	ss >> addrString;
	return (addrString);
}

Brain::~Brain(){}
