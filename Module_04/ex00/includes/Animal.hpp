/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:22:50 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/24 16:32:00 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const std::string *type);
	Animal(const Animal& copyCons);
	Animal& operator = (const Animal& otherCons);
	~Animal();

	virtual void makeSound();
	virtual std::string getType();
};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}
