/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:57:41 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/02 15:05:16 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType() const
{
	return (this->_type);
}

