/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:04:59 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/31 16:13:13 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/AForm.hpp"

// class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	const std::string target;

public:
	ShrubberyCreationForm(const std::string _target); //sign 145, exec 137
	ShrubberyCreationForm(const ShrubberyCreationForm& copyCons);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& otherCons);
	~ShrubberyCreationForm();

	std::string getTarget() const; // lets check
	std::string getName() const;
	bool getIsSigned() const;
	unsigned int getSignGrade() const;
	unsigned int getExecGrade() const;
};

