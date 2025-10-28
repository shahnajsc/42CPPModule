/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:59:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/28 10:07:11 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), target("President")
{
	std::cout << "\033[32m" << this->getName() << ": Form created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target)
: AForm("PresidentialPardonForm", 25, 5), target(_target)
{
	std::cout << "\033[32m" << this->getName() << ": Form created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyCons)
: AForm("PresidentialPardonForm", 25, 5), target(copyCons.target) {
	std::cout << "PardonForm: Copy constructor called." << std::endl;
}


PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &otherCons)
 {
	std::cout << "PardonForm: Copy assignment operator called." << std::endl;
	if (this != &otherCons) {
		this->target = otherCons.getTarget();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[31m" << this->getName() << " destroyed.";
	std::cout << "\033[37m" << std::endl;
}

const std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Executing PardonForm......." << std::endl;
	checkRequirements(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.";
	std::cout << std::endl;
}
