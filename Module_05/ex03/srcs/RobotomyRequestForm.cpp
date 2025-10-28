/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:55:59 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/28 10:08:24 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

static int robotize_Count = 0;

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), target("Robotomy")
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target)
: AForm("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copyCons)
: AForm("RobotomyRequestForm", 72, 45), target(copyCons.target) {
	std::cout << "RobotomytForm: Copy constructor called." << std::endl;
}


RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &otherCons)
 {
	std::cout << "RobotomyForm: Copy assignment operator called." << std::endl;
	if (this != &otherCons) {
		this->target = otherCons.getTarget();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[31m" << this->getName() << " destroyed.";
	std::cout << "\033[37m" << std::endl;
}

const std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Executing RobotomyForm......." << std::endl;
	checkRequirements(executor);
	std::cout << this->getName() << ": Drrrrrlllllriiinnggg!" << std::endl;

	if (robotize_Count++ % 2 == 0)
	{
		std::cout << this->target << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		throw std::runtime_error("Robotomy failed on " + this->target + ".");
	}
}

