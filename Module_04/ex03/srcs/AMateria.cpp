/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:09:43 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:10:39 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : type("Unknown")
{
}

AMateria::AMateria(const std::string  &_type) : type(_type)
{
}

AMateria::AMateria(const AMateria &copyCons) : type("")
{
	(void)copyCons;
}

AMateria &AMateria::operator = (const AMateria &otherCons)
{
	(void)otherCons;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* uses AMateria on " << target.getName() << " *" << std::endl;
}
