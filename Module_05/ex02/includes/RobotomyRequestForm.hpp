#pragma once

#include <iostream>
#include "../includes/AForm.hpp"

// class AForm;

class RobotomyRequestForm : public AForm
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string _target); //sign 72, exec 45
	RobotomyRequestForm(const RobotomyRequestForm& copyCons);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& otherCons);
	~RobotomyRequestForm();

	const std::string getTarget() const;

	void execute(Bureaucrat const &bureaucrat) const override;
};
