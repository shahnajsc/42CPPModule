#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 72, 45), target("President")
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target)
: AForm("PresidentialPardonForm", 72, 45), target(_target)
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyCons)
: AForm("PresidentialPardonForm", 145, 137), target(copyCons.target) {
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
	std::cout << " Executing PardonForm......." << std::endl;
	checkRequirements(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.";
	std::cout << std::endl;
}
