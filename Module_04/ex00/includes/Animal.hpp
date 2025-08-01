/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:22:50 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:36:47 by shachowd         ###   ########.fr       */
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
	Animal(const Animal& copyCons);
	Animal& operator = (const Animal& otherCons);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};


