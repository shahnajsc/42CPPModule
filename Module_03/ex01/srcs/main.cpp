/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/24 16:07:37 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

void test1();
void test2();

int main( void )
{
	test1();
	test2();

	ScavTrap scav2("Scav2");
	ClapTrap *clap2 = &scav2;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	clap2->attack("DDDD");
	clap2->beRepaired(5);
	clap2->takeDamage(9);

	return 0;
}

void test1()
{
	ClapTrap clap("Clap");

	clap.attack("Trap1");
	clap.takeDamage(3);
	clap.attack("Trap2");
	clap.attack("Trap3");
	clap.beRepaired(2);
	clap.takeDamage(7);
	clap.takeDamage(2);
	clap.takeDamage(1);
	clap.attack("Trap4");
	clap.beRepaired(2);

	std::cout << std::endl;
}

void test2()
{
	ScavTrap scav("Scav");

	scav.attack("Clap1");
	scav.takeDamage(3);
	scav.attack("Clap2");
	scav.attack("Clap3");
	scav.beRepaired(2);
	scav.takeDamage(7);
	scav.takeDamage(2);
	scav.takeDamage(1);
	scav.attack("Clap4");
	scav.beRepaired(2);
	scav.guardGate();
	scav.takeDamage(91);
	scav.guardGate();
}
