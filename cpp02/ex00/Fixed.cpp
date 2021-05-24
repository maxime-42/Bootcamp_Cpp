/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:01:49 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/12 18:51:35 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(/* args */):value(0)
{
	std::cout << GRN << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << MAGENTA << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed &Fixed::operator=(Fixed const &toCopy)
{
	std::cout << YELLOW << "Assignation operator called" << std::endl;
	if (this != &toCopy)
	{
		// this->value = toCopy.value;
		this->value = toCopy.getRawBits();

	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << std::endl;
}

int  Fixed::getRawBits(void)const
{
	std::cout << CYN << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int raw)
{
	this->value = raw;
}