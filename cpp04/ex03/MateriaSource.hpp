/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:39:41 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 12:57:10 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* source[4];
	int			iteratorSource;
public:
	MateriaSource(/* args */);
	~MateriaSource();
	MateriaSource(MateriaSource const & toCopy);
	MateriaSource & operator=(MateriaSource const & toCopy);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif