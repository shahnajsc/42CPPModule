/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/26 17:27:31 by shachowd         ###   ########.fr       */
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

	return 0;
}

void default_test()
{
	std::cout << std::endl << "\033[32m" << "		| DEFAULT TEST |		";
	std::cout << "\033[37m"  << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void animal_array_test()
{
	std::cout << std::endl << "\033[32m" << "		| ANIMAL ARRAY TEST |		";
	std::cout << "\033[37m"  << std::endl;

	std::cout << std::endl;
	const Animal* animals[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 6/2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
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
	std::cout << std::endl << "\033[32m" << "		| DEEP COPY TEST |		";
	std::cout << "\033[37m"  << std::endl;

	Dog *dog1 = new Dog;
	const Animal* dog2 = new Dog(*dog1);
	const Animal* dog3 = dog1;


	std::cout << std::endl;
	std::cout << std::endl;
	dog1->makeSound();
	dog2->makeSound();
	std::cout << std::endl;

	delete dog3;
	delete dog2;
	//delete dog1;
}
