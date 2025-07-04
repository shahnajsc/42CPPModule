/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:30:52 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:36:25 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : name("Unknown")
{
	for (int i = 0; i < 4; ++i)
		slot[i] = nullptr;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; ++i)
		slot[i] = nullptr;
}

Character::Character(const Character &copyCons) : name(copyCons.name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (copyCons.slot[i])
			slot[i] = copyCons.slot[i]->clone();
		else
			slot[i] = nullptr;
	}
}

Character& Character::operator=(const Character& otherCons)
{
	if (this != &otherCons)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete slot[i];
			slot[i] = nullptr;
		}

		for (int i = 0; i < 4; ++i)
		{
			if (otherCons.slot[i])
				slot[i] = otherCons.slot[i]->clone();
			else
				slot[i] = nullptr;
		}
		name = otherCons.name;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete slot[i];
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;

	for (int i = 0; i < 4; ++i)
	{
		if (slot[i] == m)
			return;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!slot[i])
		{
			slot[i] = m;
			return;
		}
	}
	std::cout << "Inventory full. Deleting extra Materia to avoid leaks." << std::endl;
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !slot[idx])
		return;
	slot[idx] = nullptr; // Nullify the slot, leave memory to the caller
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !slot[idx])
		return;
	slot[idx]->use(target);
}
