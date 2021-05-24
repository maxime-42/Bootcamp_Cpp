/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:22:01 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 16:12:25 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human(/* args */){}

Brain const &Human::getBrain()const
{
	return (this->brain);
}

std::string  Human::identify()const
{
	return (this->brain.identify());
}

Human::~Human(){}
