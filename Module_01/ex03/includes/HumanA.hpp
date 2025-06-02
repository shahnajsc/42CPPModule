/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:06:56 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/02 14:25:26 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string name, Weapon &weapon);

	void attack(void);

	~HumanA();

private:
	std::string _name;
	Weapon &_weapon;

};

#endif
