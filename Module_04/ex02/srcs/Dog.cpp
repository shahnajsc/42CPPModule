/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:45:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 15:02:00 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): AAnimal(), brain(new Brain())
{
	this->type = "Dog";
	std::cout << "\033[32m" << "Dog: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
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
		Brain* newBrain = otherCons.brain ? new Brain(*otherCons.brain) : nullptr;
		delete this->brain;
		this->brain = newBrain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[31m" << "Dog: Destructor called." << "\033[37m";
	std::cout << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sounds: Woof... woof... ruffff rufff......." << std::endl;
}

void Dog::setIdea(unsigned int index, const std::string& _idea)
{
	this->brain->setIdea(index, _idea);
}

std::string Dog::getIdea(unsigned int index)
{
	return(this->brain->getIdea(index));
}
