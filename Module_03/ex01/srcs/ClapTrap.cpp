/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 15:38:30 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10),
						energyPoints(10), attackDamage(0)
{
	std::cout << "\033[32m" << "Default constructor called, ClapTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name) : name(_name), hitPoints(10),
											energyPoints(10), attackDamage(0)
{
	std::cout << "\033[32m" << "Constructor called, ClapTrap " << name;
	std::cout << " created."  << "\033[37m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copyCons)
{
	std::cout << "ClapTrap: Copy constructor called." << std::endl;
	*this = copyCons;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& otherCons)
{
	std::cout << "ClapTrap: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->name			= otherCons.name;
		this->hitPoints		= otherCons.hitPoints;
		this->energyPoints	= otherCons.energyPoints;
		this->attackDamage	= otherCons.attackDamage;
	}

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31m" << "Destructor called, ClapTrap " << name;
	std::cout << " destroyed." << "\033[37m" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints < 1)
	{
		std::cout << "ClapTrap: " << name << " has no hit point left to ";
		std::cout << "attack" << std::endl;
	}
	else if (energyPoints < 1)
	{
		std::cout << "ClapTrap: " << name << " has no energy points left to ";
		std::cout << "attack" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap: " << name << " attacks " << target << ", causing ";
		std::cout << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		std::cout << "ClapTrap: " << name << " damaged " << amount;
		std::cout << " hit points!" << std::endl;
		hitPoints -= amount;
	}
	else if (hitPoints == 0)
		std::cout << "ClapTrap: " << name << " is already dead!" << std::endl;
	else
	{
		hitPoints = 0;
		std::cout << "ClapTrap: " << name << " died after " << amount;
		std::cout << " hit point damages!!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints < 1)
	{
		std::cout << "ClapTrap: " << name << " has no hit point left to get ";
		std::cout << "repaired" << std::endl;
	}
	else if (energyPoints < 1)
	{
		std::cout << "ClapTrap: " << name << " have no energy points to get ";
		std::cout << "repaired" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap: " << name << " received " << amount;
		std::cout << " hit points after repaired!" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
}
