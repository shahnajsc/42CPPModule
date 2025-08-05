/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/05 17:05:26 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string _name, unsigned int _grade);
	Bureaucrat(const Bureaucrat& copyCons);
	Bureaucrat& operator = (const Bureaucrat& otherCons);
	~Bureaucrat();

	const std::string getName() const; // const?
	unsigned int getGrade() const;
	void incrementGrade();
	void decrementGrade();

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
};

std::ostream& operator << (std::ostream &out, const Bureaucrat &source);
