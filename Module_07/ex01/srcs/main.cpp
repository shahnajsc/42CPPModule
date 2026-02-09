#include "../includes/iter.hpp"
#include <iostream>

void test_int();
void test_float();
void test_char();
void test_string();

int main( void ) {

	std::cout << "_______________________________________________" << std::endl;
	test_int();

	std::cout << "_______________________________________________" << std::endl;
	test_float();

	std::cout << "_______________________________________________" << std::endl;
	test_char();

	std::cout << "_______________________________________________" << std::endl;
	test_string();
	std::cout << "_______________________________________________" << std::endl;

	return 0;
}

void test_int() {
	std::cout << std::endl << GREEN << "_______| INT |______" << RESET << std::endl;

	int arrInt[] 			= { -6, 0, 9, 200};
	const int arrConstInt[]	= { -6, 0, 9, 200};

	iter(arrInt, std::size(arrInt), printF<int> );
	std::cout <<"\n";
	iter(arrConstInt, std::size(arrConstInt), printF<int> );

}

void test_float() {

	std::cout << std::endl << GREEN << "_______| FLOAT |______" << RESET << std::endl;

	float arrFloat[] 			= {-6.0, 0.0, 9.5, 200.3};
	const float arrConstFloat[]	= {-6.0, 0.0, 9.5, 200.3};

	iter(arrFloat, std::size(arrFloat), printF<float> );
	std::cout <<"\n";
	iter(arrConstFloat, std::size(arrConstFloat), printF<float> );
}

void test_char() {

	std::cout << std::endl << GREEN << "_______| CHAR |______" << RESET << std::endl;

	char arrChar[]				= {'a', 'g', 'L', 'M'};
	const char arrConstChar[]	= {'a', 'g', 'L', 'M'};

	iter(arrChar, std::size(arrChar), printF<char> );
	std::cout <<"\n";
	iter(arrConstChar, std::size(arrConstChar), printF<char> );
}

void test_string() {

	std::cout << std::endl << GREEN << "_______| STRING |______" << RESET << std::endl;

	std::string arrString[]				= { "Hello", "World"};
	const std::string arrConstString[]	= { "Hello", "World"};

	iter(arrString, std::size(arrString), printF<std::string>);
	std::cout <<"\n";
	iter(arrConstString, std::size(arrConstString), printF<std::string>);
}
