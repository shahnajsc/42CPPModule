/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:29:14 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 15:39:47 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints		= 100;
	this->energyPoints	= 50;
	this->attackDamage	= 20;

	std::cout << "\033[32m" << "Default Constructor Called, SacvTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	this->hitPoints		= 100;
	this->energyPoints	= 50;
	this->attackDamage	= 20;

	std::cout << "\033[32m" << "Constructor Called, SacvTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copyCons) : ClapTrap(copyCons)
{
	std::cout << "ScavTrap: Copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap& otherCons)
{
	std::cout << "ScavTrap: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		ClapTrap::operator= (otherCons);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31m" << "Destructor called, ScavTrap " << name;
	std::cout << " destroyed." << "\033[37m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints < 1)
	{
		std::cout << "ScavTrap: " << name << " has no hit point left to attack";
		std::cout << std::endl;
	}
	else if (energyPoints < 1)
	{
		std::cout << "ScavTrap: " << name << " has no energy points left to ";
		std::cout << "attack" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap: " << name << " attacks " << target << ", causing ";
		std::cout << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (hitPoints < 1)
		std::cout << "ScavTrap: " << name << " is already dead!" << std::endl;
	else
	{
		std::cout << "ScavTrap: " << name << " is now in Gate keeper mode";
		std::cout << std::endl;
	}
}
