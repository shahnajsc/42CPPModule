/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 16:17:27 by shachowd         ###   ########.fr       */
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
	std::cout << std::endl << "\033[0;93m" << "_______________TEST3__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Data test3;

	test3.id 	= 35;
	test3.name 	= "HIVE2";
	test3.score = 42.43;

	Data *ptrTest3 = &test3;

	std::cout << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test3.id << "], NAME:["
		<< test3.name << "], SCORE[" << test3.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest1 = Serializer::serialize(ptrTest3);

	Data *deserTest3 = Serializer::deserialize(intTest1);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << "\033[0;92m" << ptrTest3 << "\033[37m" << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << "\033[0;92m" << deserTest3 << "\033[37m" << std::endl;
	std::cout << "INT value of TEST1 Address:		" << "\033[0;94m" <<intTest1 << "\033[37m" << std::endl;

	if (ptrTest3 == deserTest3)
		std::cout << "\033[0;92m" << "Original and converted Address are same" << "\033[37m" << std::endl;
	else
		std::cout << "\033[0;31m" << "Original and converted Address are not same" << "\033[37m" << std::endl;

	std::cout << std::endl << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test3.id << "], NAME:["
		<< test3.name << "], SCORE[" << test3.score << "]" << std::endl << std::endl;
	//---------------------------------------------------

	std::cout << "_______________________________________________" << std::endl;

	return (0);
}


void Test1()
{
	std::cout << std::endl << "\033[0;93m" << "_______________TEST1__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Data test1;

	test1.id 	= 11;
	test1.name 	= "Shahnaj";
	test1.score = 42.01;

	Data *ptrTest1 = &test1;

	std::cout << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test1.id << "], NAME:["
		<< test1.name << "], SCORE[" << test1.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest1 = Serializer::serialize(ptrTest1);

	Data *deserTest1 = Serializer::deserialize(intTest1);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << "\033[0;92m" << ptrTest1 << "\033[37m" << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << "\033[0;92m" << deserTest1 << "\033[37m" << std::endl;
	std::cout << "INT value of TEST1 Address:		" << "\033[0;94m" <<intTest1 << "\033[37m" << std::endl;

	if (ptrTest1 == deserTest1)
		std::cout << "\033[0;92m" << "Original and converted Address are same" << "\033[37m" << std::endl;
	else
		std::cout << "\033[0;31m" << "Original and converted Address are not same" << "\033[37m" << std::endl;

	std::cout << std::endl << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test1.id << "], NAME:["
		<< test1.name << "], SCORE[" << test1.score << "]" << std::endl << std::endl;
}


void Test2()
{
	std::cout << std::endl << "\033[0;93m" << "_______________TEST2__________________";
	std::cout << "\033[37m" << std::endl << std::endl;
	Data test2;

	test2.id 	= 33;
	test2.name 	= "HIVE";
	test2.score = 42.42;

	Data *ptrTest2 = &test2;

	std::cout << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test2.id << "], NAME:["
		<< test2.name << "], SCORE[" << test2.score << "]" << std::endl << std::endl;

	//---------------------------------------------------
	uintptr_t intTest2 = Serializer::serialize(ptrTest2);

	Data *deserTest2 = Serializer::deserialize(intTest2);
	//---------------------------------------------------

	std::cout << "Original Address of TEST1 Dataset:	" << "\033[0;92m" << ptrTest2 << "\033[37m" << std::endl;
	std::cout << "Deserialized Address of TEST1 Dataset:	" << "\033[0;92m" << deserTest2 << "\033[37m" << std::endl;
	std::cout << "INT value of TEST1 Address:		" << "\033[0;94m" <<intTest2 << "\033[37m" << std::endl;

	if (ptrTest2 == deserTest2)
		std::cout << "\033[0;92m" << "Original and converted Address are same" << "\033[37m" << std::endl;
	else
		std::cout << "\033[0;31m" << "Original and converted Address are not same" << "\033[37m" << std::endl;

	std::cout << std::endl << "\033[0;92m" << "DATA SET:" << "\033[37m" << " ID[" << test2.id << "], NAME:["
		<< test2.name << "], SCORE[" << test2.score << "]" << std::endl << std::endl;
}
