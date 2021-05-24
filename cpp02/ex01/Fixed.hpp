/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:00:29 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/12 15:44:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#include <iostream>
#include <string>
#include <ostream> 
#include <math.h>

class Fixed
{
private:
	int value;
	static int const nbBits = 8;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(Fixed const &toCopy);
	Fixed & operator=(Fixed const &toCopy);
	Fixed(int const value);
	Fixed(const float value);
	int getRawBits(void)const;
	void	setRawBits( int const raw );
	int  toInt()const;
	float toFloat()const;

};

std::ostream &			operator<<( std::ostream & output, Fixed   const &  obj);


#endif // !FIXED
