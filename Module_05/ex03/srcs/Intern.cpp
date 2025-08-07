/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:56:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 15:56:18 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

	Intern::Intern()
	{
		std::cout << "\033[32m" << "Intern: Default constructor called.";
		std::cout << "\033[37m" << std::endl;
	}

	Intern::Intern(const Intern& copyCons)
	{
		std::cout << "Intern: Copy constructor called." << std::endl;
		*this = copyCons;
	}

	Intern& Intern::operator= (const Intern& otherCons)
	{
		std::cout << "Intern: Copy assignment operator called." << std::endl;
		if (this == &otherCons)
			return (*this);
		// nothing to copy here, since intern has no variables
		return (*this);
	}

	Intern::~Intern()
	{
		std::cout << "\033[31m" << "Intern: Destructor called.";
		std::cout << "\033[37m" << std::endl;
	}

	AForm *Intern::makeForm(std::string _formName, const std::string traget)
	{
		const std::string formNames[3] = {"shrubbery creation",
									"robotomy request",
									"presidential pardon"};

		AForm *(*formCreator[])(std::string target) = {
			[](std::string target) -> AForm* { return new ShrubberyCreationForm(target); },
			[](std::string target) -> AForm* { return new RobotomyRequestForm(target); },
			[](std::string target) -> AForm* { return new PresidentialPardonForm(target); }
		};

		for (int i = 0; i < 3; i++)
		{
			if (formNames[i] == _formName)
			{
				std::cout << "Intern creates " << _formName << std::endl;
				return formCreator[i](traget);
			}
		}

		std::cout << "Intern: form \"" << _formName << "\" not found." << std::endl;
		return nullptr;
	}
