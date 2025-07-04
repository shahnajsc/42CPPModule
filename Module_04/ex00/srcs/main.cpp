/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:32:51 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

void default_test();
void extra_test1();
void extra_test2();

int main( void )
{
	default_test();
	extra_test1();
	extra_test2();
	std::cout << std::endl;
	return 0;
}

void default_test()
{
	std::cout << std::endl << "\033[35m" << "	___| DEFAULT TEST |___		";
	std::cout << "\033[37m"  << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	std::cout << "_______________________________________________" << std::endl;
}

void extra_test1()
{
	std::cout << std::endl << "\033[35m" << "	___| EXTRA TEST 1 |___		";
	std::cout << "\033[37m"  << std::endl;

	const WrongAnimal* animal1 = new WrongAnimal();
	const WrongAnimal* animalCat = new WrongCat();
	const WrongAnimal* animalDog = new WrongDog();
	std::cout << animal1->getType() << " " << std::endl;
	std::cout << animalCat->getType() << " " << std::endl;
	std::cout << animalDog->getType() << " " << std::endl;
	animal1->makeSound();
	animalCat->makeSound();
	animalDog->makeSound();
	std::cout << std::endl;

	delete animal1;
	delete animalCat;
	delete animalDog;
	std::cout << "_______________________________________________" << std::endl;
}

void extra_test2()
{
	std::cout << std::endl << "\033[35m" << "	___| EXTRA TEST 2 |___		";
	std::cout << "\033[37m"  << std::endl;

	std::cout << std::endl;
	const WrongAnimal* animals[3];

	for (int i = 0; i < 3; i++)
	{
		if (i < 1)
			animals[i] = new WrongAnimal();
		else if (i < 2)
			animals[i] = new WrongCat();
		else
			animals[i] = new WrongDog();
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl;
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 3; ++i)
	{
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << "_______________________________________________" << std::endl;

	std::cout << std::endl;

	WrongCat cat;
	WrongDog dog;
	std::cout << std::endl;
	cat.makeSound();
	dog.makeSound();

	std::cout << std::endl;
}
