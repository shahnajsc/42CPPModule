/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:12:47 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/02 14:26:05 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string name);

	void setWeapon(const Weapon &weapon);
	void attack(void);

	~HumanB();
private:
	std::string _name;
	const Weapon *_weapon;

};

#endif
