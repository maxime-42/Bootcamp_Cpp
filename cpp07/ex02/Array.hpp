/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:25:24 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/29 11:54:39 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

template <typename T>
class Array
{
private:
	T 		*_array;
	int		_size;
	int		_nbElem;

public:
	Array():_array(NULL), _size(0), _nbElem(0){}

	Array(unsigned int n):_array(NULL), _size(n), _nbElem(0)
	{
		this->_array = new T [this->_size];
	}

	~Array()
	{ 
		if (this->_array != NULL)
			delete [] this->_array;
	}

	int getSize() const	{	return (this->_size);	}

	void printArray() 
	{
		for (int i = 0; i < this->_size; i++)
			std::cout << this->_array[i] << " " << std::endl;
	}
	
	Array(Array const & toCopy)
	{
		delete [] this->_array;
		this->_array = NULL;
		*this = toCopy;
	}

	Array & operator=(Array const & toCopy)
	{
		if (this != &toCopy)
		{
			if (this->_array != NULL)
			{
				delete [] this->_array;
			}
			this->_array = new T [toCopy._size];
			this->_size = toCopy._size;
			this->_nbElem = toCopy._nbElem;
			for (int i = 0; i < toCopy._size; i++)
			{
				this->_array[i] = toCopy._array[i];
			}
		}
		return (*this);
	}

	T & operator[](int index)
	{
		if (index >= this->_size || index < 0)
			throw Array::OutOfLimit();
		return (this->_array[index]);
	}

	struct OutOfLimit : std::exception 
	{
		const char* what() const throw()
		{
			return ("This element is out of the limits");
		}
	};
};


#endif 