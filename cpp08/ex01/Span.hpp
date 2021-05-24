/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 08:53:59 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/30 15:26:12 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
#define SPAN
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
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

class Span
{
private:
	unsigned int _sizeVect;
	std::vector<int>_vect;
	Span(/* args */);
	
public:
	Span(unsigned int n);
	Span(Span const & toCopy);
	Span & operator=(Span const & toCopy);
	void	addNumber(int toAdd);
	void	addNumber(int toStart, int theEnd);
	void	printStock(void);
	int		shortestSpan();
	int		longestSpan(void);
	unsigned int		getSize();

	~Span();
};


#endif
