/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 08:57:08 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/30 15:32:49 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(/* args */){}

Span::Span(unsigned int n):_sizeVect(n){}

Span::~Span(){}

Span::Span(Span const & toCopy)
{
	*this = toCopy;
}

Span & Span::operator=(Span const & toCopy)
{
	if (this != & toCopy)
	{
		this->_sizeVect = toCopy._sizeVect;
	}
	return (*this);
}

void	Span::addNumber(int toAdd)
{
	if (this->_vect.size() < this->_sizeVect)
	{
		this->_vect.push_back(toAdd);
	}
	else
		throw ("Stock is full, you can't add something else");
}

void	Span::addNumber(int toStart, int theEnd)
{
	while (toStart  < theEnd)
	{
		addNumber(toStart++);
	}
}

void	Span::printStock(void)
{
	std::vector<int>::iterator it = this->_vect.begin();
	std::cout << GRN "*****Displaying stock*****" << NC<< std::endl;
	while (it != this->_vect.end())
	{
		std::cout << GRN << *it << "  " << NC;
		it++;
	}
	std::cout << std::endl;
}

int	Span::shortestSpan()
{
	if (this->_vect.size() > 1)
	{
		std::sort(this->_vect.begin(), this->_vect.end());
		return(this->_vect[1] - this->_vect[0]);
	}
	else
	{
		throw ("There are not enought element to display shortestSpan");
	}
	return (0);
}

int	Span::longestSpan(void)
{
	if (this->_vect.size() > 1)
	{
		std::vector<int>::iterator theMax = std::max_element(this->_vect.begin(), this->_vect.end());
		std::vector<int>::iterator theMin = std::min(this->_vect.begin(), this->_vect.end());
		return ((*theMax - *theMin));
	}
	else
	{
		throw("There are not enought element to display longestSpan");
	}
}

unsigned int	Span::getSize()
{
	return (this->_vect.size() );
}