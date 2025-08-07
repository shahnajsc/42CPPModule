/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:25:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 14:47:44 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form(const std::string _name, const unsigned int _signGrade,
			const unsigned int _execGrade)
: name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();

	std::cout << "\033[32m" << "Form: \"" << this->name << "\" is created";
	std::cout << "\033[37m" << std::endl;
}

Form::Form(const Form& copyCons)
: name(copyCons.name), isSigned(copyCons.isSigned),
  signGrade(copyCons.signGrade), execGrade(copyCons.execGrade)
{
	std::cout << "Form: Copy constructor called." << std::endl;
}

Form& Form::operator= (const Form& otherCons)
{
	std::cout << "Form: Copy Assignment operator called." << std::endl;

	if (this != &otherCons)
	{
		this->isSigned = otherCons.isSigned;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "\033[31m" << "Form: \"" << this->name << "\" destroyed.";
	std::cout << "\033[37m" << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

unsigned int Form::getSignGrade() const
{
	return (this->signGrade);
}

unsigned int Form::getExecGrade() const
{
	return (this->execGrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!");
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->isSigned)
		throw std::runtime_error("Form is already signed!");
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<< (std::ostream &out, const Form &source)
{
	out << "Form: Form Name: " << source.getName() << ", Is Signed? ";

	if (source.getIsSigned())
		out << "\"Yes\", Sign Grade: ";
	else
		out << "\"No\", Sign Grade: ";

	out << source.getSignGrade() << ", Execution Grade: " << source.getExecGrade();

	return (out);
}
