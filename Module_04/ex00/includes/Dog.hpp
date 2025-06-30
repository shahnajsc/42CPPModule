/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:59:38 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 15:53:04 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& copyCons);
	Dog& operator = (const Dog& copyCons);
	~Dog();

	void makeSound() const override;
};
