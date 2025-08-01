/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:59:41 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 14:26:28 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& copyCons);
	Cat& operator = (const Cat& copyCons);
	~Cat();

	void makeSound() const override;
};
