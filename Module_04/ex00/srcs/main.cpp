/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/19 14:44:25 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main( void )
{
	ClapTrap ob1("Clap1");

	ob1.attack("Trap1");
	ob1.takeDamage(3);
	ob1.attack("Trap2");
	ob1.attack("Trap3");
	ob1.beRepaired(2);
	ob1.takeDamage(7);
	ob1.takeDamage(2);
	ob1.takeDamage(1);
	ob1.attack("Trap4");
	ob1.beRepaired(2);

	std::cout << std::endl;
	ClapTrap ob2;

	ob2.attack("Clap1");
	ob2.takeDamage(3);
	ob2.attack("Clap2");
	ob2.attack("Clap3");
	ob2.beRepaired(2);
	ob2.takeDamage(7);
	ob2.takeDamage(2);
	ob2.takeDamage(1);
	ob2.attack("Clap4");
	ob2.beRepaired(2);

	return 0;
}
