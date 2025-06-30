/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:32:42 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 15:39:33 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints		= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
	std::cout << "\033[32m" << "Default Constructor Called, FragTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

FragTrap::FragTrap(const std::string _name) : ClapTrap(_name)
{
	this->hitPoints		= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
	std::cout << "\033[32m" << "Constructor Called, FragTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copyCons) : ClapTrap(copyCons)
{
	std::cout << "FragTrap: Copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& otherCons)
{
	std::cout << "FragTrap: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		ClapTrap::operator = (otherCons);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31m" << "Destructor called, FragTrap " << name;
	std::cout << " destroyed." << "\033[37m" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints < 1)
	{
		std::cout << "FragTrap: " << name << " has no hit point left to ";
		std::cout << "attack" << std::endl;
	}
	else if (energyPoints < 1)
	{
		std::cout << "FragTrap: " << name << " has no energy points left to ";
		std::cout << "attack" << std::endl;
	}
	else
	{
		std::cout << "FragTrap: " << name << " attacks " << target << ", causing ";
		std::cout << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void FragTrap::highFivesGuys()
{
	if (hitPoints < 1 || energyPoints < 1)
		std::cout << "FragTrap: " << name << " is already dead!" << std::endl;
	else
	{
		std::cout << "FragTrap: " << name << " Hi! Let's give a HIGH FIVE";
		std::cout << std::endl;
	}
}

