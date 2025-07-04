/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:41:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 14:08:23 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << "\033[32m" << "Cat: Default constructor called." << "\033[37m";
	std::cout << std::endl;
}

Cat::Cat(const Cat &copyCons): Animal(copyCons), brain(new Brain(*copyCons.brain))
{
	std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &otherCons)
{
	std::cout << "Cat: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		Animal::operator=(otherCons);
		Brain* newBrain = otherCons.brain ? new Brain(*otherCons.brain) : nullptr;
		delete this->brain;
		this->brain = newBrain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[31m" << "Cat: Destructor called." << "\033[37m";
	std::cout << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sounds: Meowww.... Meowwwwww.... Meeeee" << std::endl;
}

void Cat::setIdea(unsigned int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(unsigned int index)
{
	return (brain->getIdea(index));
}
