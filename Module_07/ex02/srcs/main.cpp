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


}

void test_float() {

	std::cout << std::endl << GREEN << "_______| FLOAT |______" << RESET << std::endl;


}

void test_char() {

	std::cout << std::endl << GREEN << "_______| CHAR |______" << RESET << std::endl;

}

void test_string() {

	std::cout << std::endl << GREEN << "_______| STRING |______" << RESET << std::endl;

}
