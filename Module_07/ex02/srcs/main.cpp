#include "../includes/Array.hpp"
#include "../includes/Array.tpp"
#include <iostream>

void test_constructor();
void test_deep_copy_ac();
void test_deep_copy_cc();
void test_const();


int main( void ) {

	std::cout << "_______________________________________________" << std::endl;
	test_constructor();

	std::cout << "_______________________________________________" << std::endl;
	test_deep_copy_ac();

	std::cout << "_______________________________________________" << std::endl;
	test_deep_copy_cc();

	std::cout << "_______________________________________________" << std::endl;
	test_const();
	std::cout << "_______________________________________________" << std::endl;

	return 0;
}

void test_constructor() {
	std::cout << std::endl << GREEN << "_______| CONSTRUCTOR |______" << RESET << std::endl;
	try {
		Array<int> a;
		std::cout << "Default constructor- Size of a : " << a.size() << std::endl;
		//std::cout << "Value of a[0] : " << a[0] << std::endl;

		Array<int> a2(6);
		std::cout << "Parameterised constructor- Size of a : " << a2.size() << std::endl;
		std::cout << "Value of a2[4] : " << a2[4] << std::endl;
		std::cout << "Value of a2[5] : " << a2[5] << std::endl;
		std::cout << "Value of a2[7] : " << a2[7] << std::endl; // Out of range
	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

void test_deep_copy_ac() {

	std::cout << std::endl << GREEN << "_______| DEEP COPY (assignment ope) |______" << RESET << std::endl;
	try {
		Array<float> arr1(5);
		arr1[0] = 301.33;
		arr1[1] = 121.33;
		arr1[2] = 591.33;
		arr1[3] = 355.33;
		arr1[4] = 20.8;

		Array<float> arr2 = arr1;
		arr2[0] = 99999.30;

		std::cout << "Size of arr1 : " << arr1.size() << std::endl;
		std::cout << "Size of arr2 : " << arr2.size() << std::endl << std::endl;
		std::cout << "Value of arr1[0] : " << arr1[0] << std::endl;
		std::cout << "Value of arr2[0] : " << arr2[0] << std::endl;
		std::cout << "Value of arr2[7] : " << arr2[7] << std::endl; // Out of range

	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

void test_deep_copy_cc() {

	std::cout << std::endl << GREEN << "_______| DEEP COPY (copy cons) |______" << RESET << std::endl;
	try {
		Array<std::string> arr1(4);
		arr1[0] = "string1";
		arr1[1] = "string2";
		arr1[2] = "string3";
		arr1[3] = "string4";

		Array<std::string> arr2(arr1);
		arr2[0] = "string555";

		std::cout << "Size of arr1 : " << arr1.size() << std::endl;
		std::cout << "Size of arr2 : " << arr2.size() << std::endl << std::endl;
		std::cout << "Value of arr1[0] : " << arr1[0] << std::endl;
		std::cout << "Value of arr2[0] : " << arr2[0] << std::endl;
		std::cout << "Value of arr2[7] : " << arr2[7] << std::endl; // Out of range

	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

void test_const() {

	std::cout << std::endl << GREEN << "_______| CONST CHECK |______" << RESET << std::endl;

		try {
			Array<char> arr1(4);
			arr1[0] = 'a';
			arr1[1] = 'b';
			arr1[2] = 'c';
			arr1[3] = 'd';

			const Array<char> arr2(arr1);

			std::cout << "Size of arr1 : " << arr1.size() << std::endl;
			std::cout << "Size of arr2 : " << arr2.size() << std::endl << std::endl;
			std::cout << "Value of arr1[0] : " << arr1[0] << std::endl;
			std::cout << "Value of arr2[0] : " << arr2[0] << std::endl;
			std::cout << "Value of ar2[4] : " << arr1[4] << std::endl;

	} catch(std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
