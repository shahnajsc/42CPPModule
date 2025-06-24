/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/24 16:12:34 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

void test1();
void test2();
void test3();

int main(void)
{
	test1();
	test2();
	test3();
	
	return 0;
}

void test1()
{
	std::cout << std::endl << "		| DiamondTrap: DiaAA |		" << std::endl;
	DiamondTrap diaA("DiaAA");
	diaA.whoAmI();
	std::cout << std::endl;

	diaA.attack("Trap1");
	diaA.takeDamage(3);
	diaA.attack("Trap2");
	diaA.attack("Trap3");
	diaA.beRepaired(2);
	diaA.takeDamage(7);
	diaA.takeDamage(2);
	diaA.takeDamage(1);
	diaA.attack("Trap4");
	diaA.beRepaired(2);
	std::cout << "_______________________________________________" << std::endl;
	std::cout << std::endl;
}

void test2()
{
	std::cout << std::endl << "		| DiamondTrap: DiaBB |		" << std::endl;
	DiamondTrap diaB("DiaBB");
	diaB.whoAmI();
	std::cout << std::endl;

	diaB.attack("Trap1");
	diaB.takeDamage(3);
	diaB.attack("Trap2");
	diaB.attack("Trap3");
	diaB.beRepaired(2);
	diaB.takeDamage(7);
	diaB.takeDamage(2);
	diaB.takeDamage(1);
	diaB.attack("Trap4");
	diaB.beRepaired(2);
	std::cout << "_______________________________________________" << std::endl;
	std::cout << std::endl;
}

void test3()
{
	std::cout << std::endl << "		| DiamondTrap: DiaCC (in loop)|		" << std::endl;
	DiamondTrap diaC("DiaCC");
	diaC.whoAmI();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cout << "Index: " << i + 1 <<std::endl;
		diaC.attack("Trap1");
		diaC.takeDamage(15);
		diaC.beRepaired(3);
		std::cout <<std::endl;
	}
}
