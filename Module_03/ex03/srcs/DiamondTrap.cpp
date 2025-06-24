/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:21:24 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/24 14:14:56 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->name			= "Unnamed";
	ClapTrap::name		= "Unnamed_clap_name";
	this->hitPoints		= FragTrap::hitPoints;
	this->energyPoints	= ScavTrap::energyPoints;
	this->attackDamage	= FragTrap::attackDamage;

	std::cout << "\033[32m" << "Default Constructor Called, DiamondTrap ";
	std::cout << name << " created." << "\033[37m" << std::endl;

}

DiamondTrap::DiamondTrap(const std::string& _name) :
ClapTrap(_name + "_clap_name"),
ScavTrap(_name),
FragTrap(_name),
name(_name)
{
	this->hitPoints		= FragTrap::hitPoints;
	this->energyPoints	= ScavTrap::energyPoints;
	this->attackDamage	= FragTrap::attackDamage;

	std::cout << "\033[32m" << "Constructor Called, DiamondTrap " << name;
	std::cout << " created." << "\033[37m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copyCons) :
ClapTrap(copyCons),
ScavTrap(copyCons),
FragTrap(copyCons),
name(copyCons.name)
{
	std::cout << "DiamondTrap: Copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& otherCons)
{
	std::cout << "DiamondTrap: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		ClapTrap::operator= (otherCons);
		ScavTrap::operator= (otherCons);
		FragTrap::operator= (otherCons);
		this->name = otherCons.name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31m" << "Destructor called, DiamondTrap " << name;
	std::cout << " destroyed." << "\033[37m" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi I am DiamondTrap \"" << this->name << "\". My ClapTrap";
	std::cout << " name is \"" << this->ClapTrap::name << "\"."<< std::endl;
}
