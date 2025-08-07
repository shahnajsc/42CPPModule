/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:59:56 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 15:59:57 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../includes/AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& copyCons);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& otherCons);
	~PresidentialPardonForm();

	const std::string getTarget() const;

	void execute(Bureaucrat const &bureaucrat) const override;
};
