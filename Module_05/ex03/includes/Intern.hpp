#pragma once

#include <iostream>

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern& copyCons);
	Intern& operator= (const Intern& otherCons);
	~Intern();

	AForm *makeForm(std::string formName, const std::string _traget);
};
