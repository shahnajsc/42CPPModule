/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/01 14:24:26 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

void form_Shrubbery();
// void sign_LowGrade();
// void invalid_Form();

int main()
{
	std::cout << "_______________________________________________" << std::endl;
	form_Shrubbery();

	// std::cout << "_______________________________________________" << std::endl;
	// sign_LowGrade();

	// std::cout << "_______________________________________________" << std::endl;
	// invalid_Form();
}

void form_Shrubbery()
{
	std::cout << std::endl << "\033[35m" << "	___| Shrubbery Form Test |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	Bureaucrat br1("Tom", 3);
	std::cout << br1 << std::endl;

	ShrubberyCreationForm sb1("Home");
	std::cout << sb1 << std::endl;

	//sb1.execute(br1);

	br1.signForm(sb1);

	sb1.execute(br1);



	std::cout << "_______________________________________________" << std::endl;
}

// void sign_LowGrade()
// {
// 	std::cout << std::endl << "\033[35m" << "	___| LowGrade To Sign TEST |___		";
// 	std::cout << "\033[37m"  << std::endl << std::endl;

// 	try {
// 		Bureaucrat jim("Jim", 120);
// 		AForm formIT("IncomeTax", 100, 50);

// 		std::cout << jim << std::endl;
// 		std::cout << formIT << std::endl;

// 		jim.signForm(formIT); // should throw and catch
// 	}
// 	catch (std::exception &e) {
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}

// 	std::cout << "_______________________________________________" << std::endl;
// }

// void invalid_Form()
// {
// 	std::cout << std::endl << "\033[35m" << "	___| Invalid Form TEST |___		";
// 	std::cout << "\033[37m"  << std::endl << std::endl;

// 	std::cout << "Form IncomeTax Sign Grade is: 0" << std::endl;
// 	try
// 	{
// 		AForm formA("IncomeTax", 0, 100); // invalid: grade too high
// 	}
// 	catch (std::exception &e) {
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}

// 	//_________________________________

// 	std::cout << std::endl << "Form IncomeTax Execution Grade is: 200" << std::endl;
// 	try
// 	{
// 		AForm formB("IncomeTax", 100, 200); // invalid: grade too low
// 	}
// 	catch (std::exception &e) {
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}

// 	std::cout << "_______________________________________________" << std::endl;
// }
