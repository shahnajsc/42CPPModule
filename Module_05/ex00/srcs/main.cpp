/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/31 10:46:26 by shachowd         ###   ########.fr       */
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
}

void test_Common()
{
	std::cout << std::endl << "\033[35m" << "	___| Common TEST |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat tom("Tom", 3);
		std::cout << tom;
		std::cout << "Incrementing(1) Tom's Grade" << std::endl;
		tom.incrementGrade();
		std::cout << tom;
		std::cout << "Incrementing(2) Tom's Grade" << std::endl;
		tom.incrementGrade();
		std::cout << tom;
		std::cout << "Decrementing(1) Tom's Grade" << std::endl;
		tom.decrementGrade();
		std::cout << tom;

		std::cout << std::endl << "Testing copy" << std::endl;
		Bureaucrat unnamed;
		std::cout << unnamed;
		unnamed = tom;
		std::cout << unnamed;
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
		std::cout << bob;
		std::cout << "Incrementing(1) Bob's Grade" << std::endl;
		bob.incrementGrade();
		std::cout << bob;
		std::cout << "Incrementing(2) Bob's Grade" << std::endl;
		bob.incrementGrade();
		std::cout << bob;
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
		std::cout << jerry;
		std::cout << "Incrementing(1) Jerry's Grade" << std::endl;
		jerry.incrementGrade();
		std::cout << jerry;
		std::cout << "Decrementing(1) Jerry's Grade" << std::endl;
		jerry.decrementGrade();
		std::cout << jerry;
		std::cout << "Decrementing(1) Jerry's Grade" << std::endl;
		jerry.decrementGrade();
		std::cout << jerry;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "_______________________________________________" << std::endl;
}

void test_LowGrade()
{
	std::cout << std::endl << "\033[35m" << "	___| LowGrade TEST |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat low("Tom", 151);
		std::cout << low;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "_______________________________________________" << std::endl;
}

void test_HighGrade()
{
	std::cout << std::endl << "\033[35m" << "	___| HighGrade TEST |___		";
	std::cout << "\033[37m"  << std::endl << std::endl;

	try
	{
		Bureaucrat high("Tom", 0);
		std::cout << high;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "_______________________________________________" << std::endl;
}
