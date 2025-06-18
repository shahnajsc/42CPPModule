/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/18 16:51:15 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
//# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap& copyCons);
	ClapTrap& operator = (const ClapTrap& copyCons);
	~ClapTrap();

	// void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

private:
	std::string name;
	static const int hitPoints		= 10;
	static const int energyPoints	= 10;
	static const int damagePoints	= 0;
};
