/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:09:05 by mkayumba          #+#    #+#             */
/*   Updated: 2021/05/01 00:39:39 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#define YELLOW "\e[33m"

void testList()
{
	std::cout << "*********List**********" << std::endl;
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Number on top of the stack : "<< mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size : " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();
	++it;
	--it;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
}

int main(void)
{
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Number on top of the stack : "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	testList();
	return (0);
}
