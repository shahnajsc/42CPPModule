/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:00:34 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:55:20 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown")
{
	std::cout << "AAnimal: Default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& copyCons)
{
	std::cout << "AAnimal: Copy constructor called." << std::endl;
	*this = copyCons;
}

AAnimal& AAnimal::operator = (const AAnimal& otherCons)
{
	std::cout << "AAnimal: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->type = otherCons.type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called." << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal sounds: Grrrrr... Grr... Grrrr " << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
