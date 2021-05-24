/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:21:50 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 14:00:53 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): count(0), unit(NULL) {}

Squad::~Squad()
{
	this->ft_lstClear();
}

Squad & Squad::operator=(Squad const & toCopy)
{
	(void)toCopy;
	return (*this);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	t_list *iterator = this->unit;
	while (iterator && index)
	{
		index--;
		iterator = iterator->next;
	}
	return (iterator == NULL ? NULL : iterator->unit);
}

int Squad::getCount() const
{
	return (this->count);
}

int	Squad::checkUnit(ISpaceMarine *toCheck)
{
	t_list	*iterator = this->unit;
	while (iterator)
	{
		if (iterator->unit == toCheck)
			return (EXISTING);
		iterator = iterator->next;
	}
	return (0);
}


void	Squad::addBack(ISpaceMarine *toAdd)
{
	t_list	*iterator = this->unit;
	t_list	*node = this->unit;

	while (iterator)
	{
		node = iterator;
		iterator = iterator->next;
	}
	node->next = new t_list;
	node = node->next;
	node->unit = toAdd;
	node->next = NULL;
}

int Squad::push(ISpaceMarine *toAdd)
{
	if (toAdd == 0)
		return (this->count);
	if (checkUnit(toAdd) == EXISTING)
		return (this->count);
	if (this->unit == NULL)
	{
		this->unit = new t_list;
		this->unit->unit = toAdd;
		this->unit->next = NULL;
	}
	else
		addBack(toAdd);
	this->count += 1;
	return (this->count);
}


void Squad::ft_lstClear()
{
	t_list	*iterator = this->unit;
	t_list	*next;

	while (iterator)
	{
		next = iterator->next;
		delete iterator->unit;
		delete iterator;
		iterator = next;
	}
	this->unit = NULL;
}