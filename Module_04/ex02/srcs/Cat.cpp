/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:41:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:55:51 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat: Default constructor called." << std::endl;

}

Cat::Cat(const Cat &copyCons): AAnimal(copyCons), brain(new Brain(*copyCons.brain))
{
	std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &otherCons)
{
	std::cout << "Cat: Copy assignment operator called." << std::endl;
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

Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << std::endl;
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
