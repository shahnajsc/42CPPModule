/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 15:16:31 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void roboForm();
void shrubberyForm();
void invalidForm();

int main()
{

	roboForm();
	shrubberyForm();
	invalidForm();

	std::cout << "_______________________________________________" << std::endl;
	return 0;
}

void roboForm()
{
	std::cout << std::endl << "\033[0;35m" << "_______________Robo Form__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Intern randomIntern;
	AForm* roboForm;

	roboForm = randomIntern.makeForm("robotomy request", "Bender");
	if (roboForm)
	{
		Bureaucrat bob("Bob", 1);
		bob.signForm(*roboForm);
		bob.executeForm(*roboForm);
		delete roboForm;
	}
}

void shrubberyForm()
{
	std::cout << std::endl << "\033[0;35m" << "_______________Shrubbery Form__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Intern randomIntern;
	AForm* rshrubberyForm;

	rshrubberyForm = randomIntern.makeForm("shrubbery creation", "Home");
	if (rshrubberyForm)
	{
		Bureaucrat tom("Tom", 150);
		tom.signForm(*rshrubberyForm);
		tom.executeForm(*rshrubberyForm);
		delete rshrubberyForm;
	}
}

void invalidForm()
{
	std::cout << std::endl << "\033[0;35m" << "_______________Invalid Form__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Intern randomIntern;
	AForm* invalidForm;

	invalidForm = randomIntern.makeForm("Invalid creation", "Home");
	if (invalidForm)
	{
		Bureaucrat tom("Tom", 150);
		tom.signForm(*invalidForm);
		tom.executeForm(*invalidForm);
		delete invalidForm;
	}
}
