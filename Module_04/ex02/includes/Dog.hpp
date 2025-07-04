/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:59:38 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 14:44:57 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog& copyCons);
	Dog& operator = (const Dog& copyCons);
	~Dog();

	void makeSound() const;
	void setIdea(unsigned int index, const std::string& idea);
	std::string getIdea(unsigned int index);
};
