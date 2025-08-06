/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:19:51 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/06 14:50:39 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyForm", 145, 137), target("Home")
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target)
: AForm("ShrubberyForm", 145, 137), target(_target)
{
	std::cout << "\033[32m" << this->getName() << " created. Target is: ";
	std::cout << this->target << "\033[37m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copyCons)
: AForm("ShrubberyForm", 145, 137), target(copyCons.target) {
	std::cout << "ShrubberyForm: Copy constructor called." << std::endl;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &otherCons)
 {
	std::cout << "ShrubberyForm: Copy assignment operator called." << std::endl;
	if (this != &otherCons) {
		this->target = otherCons.getTarget();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[31m" << this->getName() << " destroyed.";
	std::cout << "\033[37m" << std::endl;
}

const std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << " Executing ShrubberyForm......." << std::endl;
	checkRequirements(executor);
	std::ofstream	treeFile;

	treeFile.open(this->target + "_shrubbery");
	if (treeFile.fail())
	{
		throw std::runtime_error("ShrubberyForm:" + this->target + "_shrubbery: Failed to open.");
	}
	else
	{
		treeFile << executor.getName() << " created:" << std::endl << std::endl;
		treeFile << "           &&& &&  & &&\n";
		treeFile << "       && &\\/&\\|& ()|/ @, &&\n";
		treeFile << "       &\\/(\\&/&||/& /_/)_&/_&\n";
		treeFile << "    &() &\\/&|()|/&\\/ '%\" & ()\n";
		treeFile << "    &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
		treeFile << "  &&   && & &| &| /& & % ()& /&&\n";
		treeFile << "   ()&_---()&\\&\\|&&-&&--%---()~\n";
		treeFile << "       &&     \\|||\n";
		treeFile << "               |||\n";
		treeFile << "               |||\n";
		treeFile << "               |||\n";
		treeFile << "         , -=-~  .-^- _\n";
		treeFile.close();
		std::cout << this->target << "_shrubbery file created" << std::endl;
	}
}

