/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:25:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/01 14:21:22 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm()
: name("unnamedForm"), isSigned(false), signGrade(130), execGrade(130)
{
	std::cout << "\033[32m" << "Form \"" << this->name << "\" is created";
	std::cout << "\033[37m" << std::endl;
}

AForm::AForm(const std::string _name, const unsigned int _signGrade,
	const unsigned int _execGrade)
	: name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw (AForm::GradeTooHighException());
	if (_signGrade > 150 || _execGrade > 150)
		throw (AForm::GradeTooLowException());

	std::cout << "\033[32m" << "Form \"" << this->name << "\" is created";
	std::cout << "\033[37m" << std::endl;
}

AForm::AForm(const AForm& copyCons) : name(copyCons.name),
									isSigned(copyCons.isSigned),
									signGrade(copyCons.signGrade),
									execGrade(copyCons.execGrade)
{
	std::cout << "Form: Copy constructor called." << std::endl;
}

AForm& AForm::operator= (const AForm& otherCons)
{
	std::cout << "Form: Copy assignment operator called." << std::endl;

	if (this != &otherCons)
	{
		this->isSigned = otherCons.isSigned;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "\033[31m" << "Form \"" << this->name << "\" destroyed.";
	std::cout << "\033[37m" << std::endl;
}

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

unsigned int AForm::getSignGrade() const
{
	return (this->signGrade);
}

unsigned int AForm::getExecGrade() const
{
	return (this->execGrade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed.");
}

const char* AForm::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed.");
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned)
		throw (FormAlreadySignedException());
		
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

// void AForm::execute(const Bureaucrat &bureaucrat) const
// {
// 	if (!this->isSigned)
// 		throw FormNotSignedException();
// 	if (bureaucrat.getGrade() <= this->getExecGrade())
// 		std::cout << "Form Executed" << std::endl;
// 	else
// 		throw AForm::GradeTooLowException();
// }

void	AForm::checkRequirements(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw (FormNotSignedException());
	else if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooLowException());
}

std::ostream& operator<< (std::ostream &out, const AForm &source)
{
	out << "Form Name: " << source.getName() << ", Is Signed? ";

	if (source.getIsSigned())
		out << "\"Yes\" Sign Grade: ";
	else
		out << "\"No\" Sign Grade: ";

	out << source.getSignGrade() << " Execution Grade: " << source.getExecGrade();

	return (out);
}
