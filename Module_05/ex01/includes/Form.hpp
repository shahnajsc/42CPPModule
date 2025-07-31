/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:52:09 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/31 16:29:06 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	const unsigned int	signGrade;
	const unsigned int	execGrade;

public:
	Form(const std::string _name, const unsigned int _signGrade,
			const unsigned int _execGrade);
	Form(const Form& copyCons);
	Form& operator= (const Form& otherCons);
	~Form();

	std::string getName() const;
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

	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream& operator<< (std::ostream &out, const Form &source);
