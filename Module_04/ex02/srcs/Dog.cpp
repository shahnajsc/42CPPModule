/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:45:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:56:11 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): AAnimal(), brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog &copyCons) : AAnimal(copyCons), brain(new Brain(*copyCons.brain))
{
	std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &otherCons)
{
	std::cout << "Dog: Copy assignment operator called." << std::endl;
if (this != &otherCons)
	{
		AAnimal::operator=(otherCons);
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

void Dog::setIdea(unsigned int index, const std::string& _idea)
{
	brain->setIdea(index, _idea);
}

std::string Dog::getIdea(unsigned int index)
{
	return(brain->getIdea(index));
}
