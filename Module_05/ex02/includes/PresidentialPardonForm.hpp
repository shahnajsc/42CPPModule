#pragma once

#include <iostream>
#include "../includes/AForm.hpp"

// class AForm;

class PresidentialPardonForm : public AForm
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string _target); //sign 25, exec 5
	PresidentialPardonForm(const PresidentialPardonForm& copyCons);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& otherCons);
	~PresidentialPardonForm();

	const std::string getTarget() const;

	void execute(Bureaucrat const &bureaucrat) const override;
};
