/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:33:27 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 13:56:55 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[32m" << "Brain: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Idea: " + std::to_string(i + 1);
	}
}

Brain::Brain(const Brain& copyCons)
{
	std::cout << "Brain: Copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copyCons.ideas[i];
	}
}

Brain &Brain::operator = (const Brain& otherCons)
{
	std::cout << "Brain: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = otherCons.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[31m" << "Brain: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void Brain::setIdea(unsigned int index, const std::string& idea)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index)
{
	return (this->ideas[index]);
}
