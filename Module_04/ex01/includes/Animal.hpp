/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:22:50 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/25 15:01:56 by shachowd         ###   ########.fr       */
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


