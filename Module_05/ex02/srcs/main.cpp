/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/06 16:48:23 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void form_Shrubbery();
void form_Robotomy();
void form_Pardon();

int main()
{
	std::cout << "_______________________________________________" << std::endl;
	form_Shrubbery();

	std::cout << "_______________________________________________" << std::endl;
	form_Robotomy();

	std::cout << "_______________________________________________" << std::endl;
	form_Pardon();
}

void form_Shrubbery()
{
	std::cout << std::endl << "\033[35m" << "	___| Shrubbery Form Test |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	Bureaucrat br1("Tom", 15);
	std::cout << br1 << std::endl;

	ShrubberyCreationForm sb1("Home");
	std::cout << sb1 << std::endl;

	//sb1.execute(br1);

	br1.signForm(sb1);
	br1.executeForm(sb1);
	std::cout << "_______________________________________________" << std::endl;

}

void form_Robotomy()
{
	std::cout << std::endl << "\033[35m" << "	___| Robotomy Form Test |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	Bureaucrat br1("Tom", 15);
	std::cout << br1 << std::endl;

	RobotomyRequestForm rf1("HomeRobot");
	br1.signForm(rf1);
	br1.executeForm(rf1);
	br1.executeForm(rf1);
	br1.executeForm(rf1);
	br1.executeForm(rf1);

	std::cout << "_______________________________________________" << std::endl;

}


void form_Pardon()
{
	std::cout << std::endl << "\033[35m" << "	___| Pardon Form Test |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	Bureaucrat br1("Tom", 15);
	std::cout << br1 << std::endl;

	PresidentialPardonForm pr1("President");
	br1.signForm(pr1);
	br1.executeForm(pr1);
	std::cout << "_______________________________________________" << std::endl;
}
