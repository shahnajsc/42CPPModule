/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:45:43 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 16:54:28 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
//#include "Character.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &copyCons) : AMateria(copyCons)
{
}

Ice &Ice::operator = (const Ice &otherCons)
{
	if (this != &otherCons)
	{

	}
	return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << std::endl;
}
