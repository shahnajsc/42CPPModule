/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/08/07 15:29:06 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void test_Common();
void test_HighGrade();
void test_LowGrade();

int main()
{
	std::cout << "_______________________________________________" << std::endl;
	test_Common();

	std::cout << "_______________________________________________" << std::endl;
	test_HighGrade();

	std::cout << "_______________________________________________" << std::endl;
	test_LowGrade();

	std::cout << "_______________________________________________" << std::endl;
}

void test_Common()
{
	std::cout << std::endl << "\033[35m" << "________| Common TEST |__________";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat tom("Tom", 3);
		std::cout << tom << std::endl;
		std::cout << "Incrementing(1) Tom's Grade" << std::endl;
		tom.incrementGrade();
		std::cout << tom << std::endl;
		std::cout << "Incrementing(2) Tom's Grade" << std::endl;
		tom.incrementGrade();
		std::cout << tom << std::endl;
		std::cout << "Decrementing(1) Tom's Grade" << std::endl;
		tom.decrementGrade();
		std::cout << tom << std::endl;

		std::cout << std::endl << "Testing copy" << std::endl;
		Bureaucrat unnamed;
		std::cout << unnamed << std::endl;
		unnamed = tom;
		std::cout << unnamed << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	//_____________________________________________________
	try
	{
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		std::cout << "Incrementing(1) Bob's Grade" << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		std::cout << "Incrementing(2) Bob's Grade" << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	//_____________________________________________________
	try
	{
		Bureaucrat jerry("Jerry", 150);
		std::cout << jerry << std::endl;
		std::cout << "Incrementing(1) Jerry's Grade" << std::endl;
		jerry.incrementGrade();
		std::cout << jerry << std::endl;
		std::cout << "Decrementing(1) Jerry's Grade" << std::endl;
		jerry.decrementGrade();
		std::cout << jerry << std::endl;
		std::cout << "Decrementing(1) Jerry's Grade" << std::endl;
		jerry.decrementGrade();
		std::cout << jerry << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

void test_LowGrade()
{
	std::cout << std::endl << "\033[35m" << "________| LowGrade TEST |_________";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat low("Tom", 151);
		std::cout << low << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

void test_HighGrade()
{
	std::cout << std::endl << "\033[35m" << "_______| HighGrade TEST |________";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat high("Tom", 0);
		std::cout << high << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
