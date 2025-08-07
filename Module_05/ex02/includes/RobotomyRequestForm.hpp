/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:59:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 15:59:38 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& copyCons);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& otherCons);
	~RobotomyRequestForm();

	const std::string getTarget() const;

	void execute(Bureaucrat const &bureaucrat) const override;
};
