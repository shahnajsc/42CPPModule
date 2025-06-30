/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/30 13:10:46 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

void test1();
void test2();

int main( void )
{
	test1();
	test2();

	std::cout << std::endl;

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
	FragTrap scav("Frag");

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
	scav.highFivesGuys();
	scav.takeDamage(91);
	scav.highFivesGuys();
}
