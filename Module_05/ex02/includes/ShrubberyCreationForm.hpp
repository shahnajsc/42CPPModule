/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:04:59 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/01 11:46:39 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "../includes/AForm.hpp"

// class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string _target); //sign 145, exec 137
	ShrubberyCreationForm(const ShrubberyCreationForm& copyCons);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& otherCons);
	~ShrubberyCreationForm();

	const std::string getTarget() const;

	void execute(Bureaucrat const &bureaucrat) const override;
};
