#include "../includes/templates.hpp"
#include <iostream>

void test_default();
void test_string();
void test_float();
void test_int();
void test_sameValue();

int main( void ) {

	std::cout << "_______________________________________________" << std::endl;
	test_default();

	std::cout << "_______________________________________________" << std::endl;
	test_string();

	std::cout << "_______________________________________________" << std::endl;
	test_float();

	std::cout << "_______________________________________________" << std::endl;
	test_int();

	std::cout << "_______________________________________________" << std::endl;
	test_sameValue();
	std::cout << "_______________________________________________" << std::endl;

	return 0;
}

void test_default() {

	std::cout << std::endl << GREEN << "_______| DEFAULT |______" << RESET << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void test_string() {

	std::cout << std::endl << GREEN << "_______| STRING |______" << RESET << std::endl;

	std::string s1 = "stringS1";
	std::string s2 = "stringS2";

	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min( s1, s2 ) = " << ::min( s1, s2 ) << std::endl;
	std::cout << "max( s1, s2 ) = " << ::max( s1, s2 ) << std::endl;
}


void test_float() {

	std::cout << std::endl << GREEN << "_______| FLOAT |______" << RESET << std::endl;
	float f1 = 2.33f;
	float f2 = 3.87f;

	::swap( f1, f2 );
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
}

void test_int() {

	std::cout << std::endl << GREEN << "_______| INT |______" << RESET << std::endl;
	int a = 27;
	int b = 55;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}

void test_sameValue() {

	std::cout << std::endl << GREEN << "_______| SAME VALUE |______" << RESET << std::endl;
	int a = 876;
	int b = 876;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}
