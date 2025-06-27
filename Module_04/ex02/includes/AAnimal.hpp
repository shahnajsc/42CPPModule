/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:22:50 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:54:01 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal& copyCons);
	AAnimal& operator = (const AAnimal& otherCons);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};


