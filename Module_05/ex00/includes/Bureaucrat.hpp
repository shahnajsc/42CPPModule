/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:32:28 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/30 15:18:43 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(const std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& copyCons);
	Bureaucrat& operator = (const Bureaucrat& otherCons);
	~Bureaucrat();

	std::string getName() const;
	// This returns a copy of the name. If you want to avoid copying, you can return a reference:
	//const std::string& Bureaucrat::getName() const
	int getGrade() const;
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
