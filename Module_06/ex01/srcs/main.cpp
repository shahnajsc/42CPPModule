/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 12:10:21 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

void Test1();
void Test2();

int main()
{
	Test1();
	Test2();

	//---------------------------------------------------
	std::cout << std::endl << YELLOW << "_______________TEST3__________________";
	std::cout << RESET << std::endl << std::endl;
	Data test3;

	test3.id 	= 35;
	test3.name 	= "HIVE2";
	test3.score = 42.43;

	Data *ptrTest3 = &test3;

	std::cout << GREEN << "DATA SET:" << RESET << " ID[" << test3.id << "], NAME:["
		<< test3.name << "], SCORE[" << test3.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest1 = Serializer::serialize(ptrTest3);

	Data *deserTest3 = Serializer::deserialize(intTest1);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << GREEN << ptrTest3 << RESET << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << GREEN << deserTest3 << RESET << std::endl;
	std::cout << "INT value of TEST1 Address:		" << GREEN <<intTest1 << RESET << std::endl;

	if (ptrTest3 == deserTest3)
		std::cout << PINK << "Original and converted Address are same" << RESET << std::endl;
	else
		std::cout << PINK << "Original and converted Address are not same" << RESET << std::endl;

	std::cout << std::endl << GREEN << "DATA SET:" << RESET << " ID[" << test3.id << "], NAME:["
		<< test3.name << "], SCORE[" << test3.score << "]" << std::endl << std::endl;
	//---------------------------------------------------

	std::cout << "_______________________________________________" << std::endl;

	return (0);
}


void Test1()
{
	std::cout << std::endl << YELLOW << "_______________TEST1__________________";
	std::cout << RESET << std::endl << std::endl;
	Data test1;

	test1.id 	= 11;
	test1.name 	= "Shahnaj";
	test1.score = 42.01;

	Data *ptrTest1 = &test1;

	std::cout << GREEN << "DATA SET:" << RESET << " ID[" << test1.id << "], NAME:["
		<< test1.name << "], SCORE[" << test1.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest1 = Serializer::serialize(ptrTest1);

	Data *deserTest1 = Serializer::deserialize(intTest1);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << GREEN << ptrTest1 << RESET << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << GREEN << deserTest1 << RESET << std::endl;
	std::cout << "INT value of TEST1 Address:		" << GREEN <<intTest1 << RESET << std::endl;

	if (ptrTest1 == deserTest1)
		std::cout << PINK << "Original and converted Address are same" << RESET << std::endl;
	else
		std::cout << PINK << "Original and converted Address are not same" << RESET << std::endl;

	std::cout << std::endl << GREEN << "DATA SET:" << RESET << " ID[" << test1.id << "], NAME:["
		<< test1.name << "], SCORE[" << test1.score << "]" << std::endl << std::endl;
}


void Test2()
{
	std::cout << std::endl << YELLOW << "_______________TEST2__________________";
	std::cout << RESET << std::endl << std::endl;
	Data test2;

	test2.id 	= 33;
	test2.name 	= "HIVE";
	test2.score = 42.42;

	Data *ptrTest2 = &test2;

	std::cout << GREEN << "DATA SET:" << RESET << " ID[" << test2.id << "], NAME:["
		<< test2.name << "], SCORE[" << test2.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest2 = Serializer::serialize(ptrTest2);

	Data *deserTest2 = Serializer::deserialize(intTest2);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << GREEN << ptrTest2 << RESET << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << GREEN << deserTest2 << RESET << std::endl;
	std::cout << "INT value of TEST1 Address:		" << GREEN <<intTest2 << RESET << std::endl;

	if (ptrTest2 == deserTest2)
		std::cout << PINK << "Original and converted Address are same" << RESET << std::endl;
	else
		std::cout << PINK << "Original and converted Address are not same" << RESET << std::endl;

	std::cout << std::endl << GREEN << "DATA SET:" << RESET<< " ID[" << test2.id << "], NAME:["
		<< test2.name << "], SCORE[" << test2.score << "]" << std::endl << std::endl;
}
