/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 14:23:08 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

void default_test();
void animal_array_test();
void deep_copy_test();


int main( void )
{
	default_test();
	animal_array_test();
	deep_copy_test();
	std::cout << std::endl;

	return 0;
}

void default_test()
{
	std::cout << std::endl << "\033[35m" << "	__| DEFAULT TEST |__		";
	std::cout << "\033[37m"  << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}

void animal_array_test()
{
	std::cout << std::endl << "\033[35m" << "	__| ANIMAL ARRAY TEST |__		";
	std::cout << "\033[37m"  << std::endl;

	std::cout << std::endl;
	const Animal* animals[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 6/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << std::endl;
		std::cout << "		| Animal Type: " << animals[i]->getType() << " |";
		std::cout << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; ++i)
	{
		delete animals[i];
	}
	std::cout << std::endl;
}

void deep_copy_test()
{
	std::cout << std::endl << "\033[35m" << "	__| DEEP COPY TEST |__		";
	std::cout << "\033[37m"  << std::endl;

	Dog dog1;
	Dog dog2(dog1);

	std::cout << std::endl << "IDEAS (before change) " << std::endl;
	std::cout << "Dog1 IDEA: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2 IDEA: " << dog2.getIdea(0) << std::endl;

	dog1.setIdea(0, "new idea 1");
	dog2.setIdea(0, "new idea 2");

	std::cout << std::endl << "IDEAS (after change) " << std::endl;
	std::cout << "Dog1 IDEA: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2 IDEA: " << dog2.getIdea(0) << std::endl;
	std::cout << std::endl;
}
