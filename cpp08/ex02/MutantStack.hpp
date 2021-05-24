/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:03:49 by mkayumba          #+#    #+#             */
/*   Updated: 2021/05/01 00:23:22 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <string>
#include <iostream>
#include <list>
template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator iterator;
	
	MutantStack(){}
	MutantStack(const MutantStack<T> & other)
	{
		*this = other;
	}

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
	MutantStack<T> & operator=(const MutantStack<T> & other)
	{
		this->c = other.c;
		return (*this);
	}
	~MutantStack(){}
private:
};

#endif