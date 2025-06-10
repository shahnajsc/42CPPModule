/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:57:41 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:21:56 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &_type): type(_type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string _type)
{
	this->type = _type;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

