/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:29:18 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 13:08:38 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& _name);
	ScavTrap(const ScavTrap& copyCons);
	ScavTrap& operator = (const ScavTrap& otherCons);
	~ScavTrap();


	void attack(const std::string& target) override;
	void guardGate();

};

