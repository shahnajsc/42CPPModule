/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:45:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/26 17:43:29 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): Animal(), brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog &copyCons) : Animal(copyCons), brain(new Brain(*copyCons.brain))
{
	std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &otherCons)
{
	std::cout << "Dog: Copy assignment operator called." << std::endl;
if (this != &otherCons)
	{
		Animal::operator=(otherCons);
		delete this->brain;
		if (otherCons.brain != nullptr)
			this->brain = new Brain(*otherCons.brain);
		else
			this->brain = nullptr;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sounds: Woof... woof... ruffff rufff......." << std::endl;
}
