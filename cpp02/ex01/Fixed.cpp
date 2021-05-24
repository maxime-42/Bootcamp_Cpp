/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:01:49 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/12 16:09:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */):value(0){	std::cout << GRN << "Defaut constructor" << NC << std::endl;}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << MAGENTA << "Copy constructor called" << NC << std::endl;
	*this = toCopy;
}

//float_to_fixed
Fixed::Fixed(const float value):value(round(value * (1 << this->nbBits )))
{
	std::cout << "Float constructor called" << NC << std::endl;
}

//int to fixe point
Fixed::Fixed(int const value):value(value << this->nbBits)
{
	std::cout << GRN << "Int constructor called" << NC <<  std::endl;
	this->value = value << this->nbBits;
}

Fixed &Fixed::operator=(Fixed const &toCopy)
{
	std::cout << YELLOW << "Assignation operator called" << std::endl;
	if (this != &toCopy)
	{
		this->value = toCopy.value;
	}
	return (*this);
}

Fixed::~Fixed(){	std::cout << RED << "Destructor called" << NC << std::endl;}

int  Fixed::getRawBits(void)const
{
	std::cout << CYN << "getRawBits member function called" << NC << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw ){	this->value = raw;}

float Fixed::toFloat(void)const
{
	return ((float)this->value / (1 << this->nbBits));
}

int   Fixed::toInt()const
{
	return (this->value >> this->nbBits);
}

std::ostream &			operator<<(std::ostream & output, Fixed   const &  obj)
{
	output << " " << obj.toFloat();
	return (output);
}