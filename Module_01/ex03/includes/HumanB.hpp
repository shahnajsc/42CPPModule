/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:12:47 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:20:54 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string _name);

	void setWeapon(const Weapon &_weapon);
	void attack(void);

	~HumanB();
private:
	std::string name;
	const Weapon *weapon;

};
