/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/18 16:56:54 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const std::string _name) : name(_name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copyCons)
{
	*this = copyCons;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& copyCons)
{
	if (this != &copyCons)
		this->name = copyCons.name;
	std::cout << "copyCons: " << copyCons.name << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "hit: " << hitPoints << std::endl;
	std::cout << "energy: " << energyPoints << std::endl;
	std::cout << "damage: " << damagePoints << std::endl;
	std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}
