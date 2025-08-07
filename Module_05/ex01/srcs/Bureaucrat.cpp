/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:00:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 14:39:42 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat(): name("Unnamed"), grade(150)
{
	std::cout << "\033[32m" << "Bureaucrat: \"" << this->name << "\" is created";
	std::cout << "\033[37m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name),
															 grade(_grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "\033[32m" << "Bureaucrat: \"" << this->name << "\" is created";
	std::cout << "\033[37m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copyCons): name(copyCons.name),
													grade(copyCons.grade)
{
	std::cout << "Bureaucrat: Copy constructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& otherCons)
{
	std::cout << "Bureaucrat: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->grade = otherCons.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[31m" << "Bureaucrat: \"" << this->name << "\" destroyed";
	std::cout << "\033[37m" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!");
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed the form: " << form.getName();
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't sign the form: " << form.getName();
		std::cout << ", because " << e.what() << std::endl;
	}
}

std::ostream& operator << (std::ostream &out, const Bureaucrat &source)
{
	out << source.getName() << ", bureaucrat grade " << source.getGrade() << ".";

	return (out);
}


