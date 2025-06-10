/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:06:56 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:21:13 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string _name, Weapon &_weapon);

	void attack(void);

	~HumanA();

private:
	std::string name;
	Weapon &weapon;

};
