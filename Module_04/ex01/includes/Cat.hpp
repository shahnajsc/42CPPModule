/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:59:41 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/27 11:44:42 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

class Cat : public Animal, public Brain
{
private:
	Brain *brain;

public:
	 Cat();
	 Cat(const Cat& copyCons);
	 Cat& operator = (const Cat& copyCons);
	~ Cat();

	void makeSound() const;
	void setIdea(unsigned int index, const std::string& idea);
	std::string getIdea(unsigned int index);
};
