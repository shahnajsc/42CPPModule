/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/26 11:39:47 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copyCons)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	*this = copyCons;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& otherCons)
{
	std::cout << "WrongAnimal: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->type = otherCons.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds: Grrrrr... Grr... Grrrr ";
	std::cout << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (this->type);
}
