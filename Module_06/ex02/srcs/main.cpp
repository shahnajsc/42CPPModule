/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 21:17:51 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {

	std::srand(std::time(NULL));

	switch (std::rand() % 3) {
		case 0: {
			std::cout << "Creating A class object" << std::endl;
			return new A;
		}
		case 1: {
			std::cout << "Creating B class object" << std::endl;
			return new B;
		}
		case 2: {
			std::cout << "Creating C class object" << std::endl;
			return new C;
		}
	}
	return NULL;
}

// in case of dynamic type cast error, -pointers return nullptr  -reference throws error
void identify(Base* p) {

	A *ptrA = dynamic_cast<A*>(p);
	B *ptrB = dynamic_cast<B*>(p);
	C *ptrC = dynamic_cast<C*>(p);

	if (ptrA)
		std::cout << "A" << std::endl;
	else if (ptrB)
		std::cout << "B" << std::endl;
	else if (ptrC)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A &ptrA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)&ptrA;
	}
	catch (const std::bad_cast &e) {
		std::cout << "Error A: " << e.what() << std::endl;
	}
	try {
		B &ptrB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)&ptrB;
	}
	catch (const std::bad_cast &e) {
		std::cout << "Error B: " << e.what() << std::endl;
	}
	try {
		C &ptrC = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)&ptrC;
	}
	catch (const std::bad_cast &e) {
		std::cout << "Error C: " << e.what() << std::endl;
	}
}

class D {

};

int main(void)
{
	std::cout << std::endl << "\033[0;93m" << "_______________TEST__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Base *obj = generate();

	std::cout << std::endl << "#POINTER#" << std::endl;
	identify(obj);

	std::cout << std::endl << "#REFERENCE#" << std::endl;
	identify(*obj);

	delete obj;

	return 0;
}
