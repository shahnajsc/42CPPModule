/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:52:09 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/01 13:17:39 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				isSigned;
	const unsigned int	signGrade;
	const unsigned int	execGrade;

protected:
	void	checkRequirements(Bureaucrat const & executor) const;

public:
	AForm();
	AForm(const std::string _name, const unsigned int _signGrade,
		const unsigned int _execGrade);
	AForm(const AForm& copyCons);
	AForm& operator= (const AForm& otherCons);
	virtual ~AForm();

	const std::string getName() const;
	bool getIsSigned() const;
	unsigned int getSignGrade() const;
	unsigned int getExecGrade() const;

	class GradeTooHighException : public std::exception
	{
	public:
		 const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class FormAlreadySignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream& operator<< (std::ostream &out, const AForm &source);
