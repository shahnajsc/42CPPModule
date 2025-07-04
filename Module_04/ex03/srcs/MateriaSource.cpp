/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:35:30 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:51:59 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		catalogue[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.catalogue[i])
			catalogue[i] = other.catalogue[i]->clone();
		else
			catalogue[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other) {
		for (int i = 0; i < 4; ++i)
		{
			delete catalogue[i];
			if (other.catalogue[i])
				catalogue[i] = other.catalogue[i]->clone();
			else
				catalogue[i] = nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete catalogue[i];
		catalogue[i] = nullptr;
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!catalogue[i])
		{
			catalogue[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (catalogue[i] && catalogue[i]->getType() == type)
			return catalogue[i]->clone();
	}
	return nullptr;
}
