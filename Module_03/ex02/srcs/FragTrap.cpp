/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:32:42 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/23 18:17:16 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints		= 100;
	energyPoints	= 100;
	attackDamage	= 30;
	std::cout << "\033[32m" << "Default Constructor Called, SacvTrap " << name << " created." << "\033[37m" << std::endl;
}

FragTrap::FragTrap(const std::string _name) : ClapTrap(_name)
{
	hitPoints		= 100;
	energyPoints	= 100;
	attackDamage	= 30;
	std::cout << "\033[32m" << "Constructor Called, FragTrap " << name << " created." << "\033[37m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copyCons) : ClapTrap(copyCons)
{
	std::cout << "FragTrap: Copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& otherCons)
{
	std::cout << "FragTrap: Copy assignment operator called." << std::endl;
	ClapTrap::operator = (otherCons);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31m" << "Destructor called, FragTrap " << name << " destroyed." << "\033[37m" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints < 1)
		std::cout << "FragTrap: " << name << " has no hit point left to attack" << std::endl;
	else if (energyPoints < 1)
		std::cout << "FragTrap: " << name << " has no enegry points left to attack" << std::endl;
	else
	{
		std::cout << "FragTrap: " << name << " attacks " << target << ", causing ";
		std::cout << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void FragTrap::highFivesGuys()
{
	if (hitPoints < 1)
		std::cout << "FragTrap: " << name << " is already dead!" << std::endl;
	else
		std::cout << "FragTrap: " << name << " Hi! Let's give a HIGH FIVE" << std::endl;
}

