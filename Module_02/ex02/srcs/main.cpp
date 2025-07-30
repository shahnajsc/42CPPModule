/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/21 15:23:20 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) {
Fixed  a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );


std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;


Fixed num1(3.5f), num2(2.0f);
std::cout << "Min: " << Fixed::min(num1, num2).toFloat() << "\n";
std::cout << "Max: " << Fixed::max(num1, num2).toFloat() << "\n";


std::cout << "== Arithmetic Tests ==\n";

	// operator+
	Fixed addA(5.5f), addB(2.5f);
	Fixed addResult = addA + addB;
	std::cout << "5.5 + 2.5 = " << addResult.toFloat() << "\n";

	// operator-
	Fixed subA(7.0f), subB(3.0f);
	Fixed subResult = subA - subB;
	std::cout << "7.0 - 3.0 = " << subResult.toFloat() << "\n";

	// operator*
	Fixed mulA(4.0f), mulB(2.5f);
	Fixed mulResult = mulA * mulB;
	std::cout << "4.0 * 2.5 = " << mulResult.toFloat() << "\n";

	// operator/
	Fixed divA(10.0f), divB(3.5f);
	Fixed divResult = divA / divB;
	std::cout << "10.0 / 3.5 = " << divResult.toFloat() << "\n";

	std::cout << "\n== Comparison Tests ==\n";

	// operator>
	Fixed gtA(5), gtB(3);
	std::cout << "5 > 3: " << (gtA > gtB) << "\n";

	// operator<
	Fixed ltA(1), ltB(4);
	std::cout << "1 < 4: " << (ltA < ltB) << "\n";

	// operator>=
	Fixed geA(6), geB(6);
	std::cout << "6 >= 6: " << (geA >= geB) << "\n";

	// operator<=
	Fixed leA(3), leB(9);
	std::cout << "3 <= 9: " << (leA <= leB) << "\n";

	// operator==
	Fixed eqA(7.25f), eqB(7.25f);
	std::cout << "7.25 == 7.25: " << (eqA == eqB) << "\n";

	// operator!=
	Fixed neA(2), neB(5);
	std::cout << "2 != 5: " << (neA != neB) << "\n";


return 0;
}

// 10.7 * 10^1 = 107
// 10.789 * 10 ^ 3 = 10789

// 107 / 10^1 = 10.7
// 10 * 2^8 = 2560
// 16 * 2 ^ 8 = 4096

// 00000000 0000000 | 00001000  00000000

// 2560 / 2 ^8 = 10

// 10.9786  * 2^16 (65536)  = 701235

// 701235 / 2^16 = 10.699

// 00000000 0000000  00001010 | 10110011


// 100000000  = int 1

// 10000000 = 256 = 2 ^ 8

//  _raw_value /(1 << _fractional_bit)



// #include "Fixed.hpp"

// void comparison_test();
// void arithmetic_test();
// void in_de_crement_test();
// void min_max_test();

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << std::endl << "		|| DEFAULT TESTs ||" << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	comparison_test();
// 	arithmetic_test();
// 	in_de_crement_test();
// 	min_max_test();
// 	return 0;
// }

// void comparison_test()
// {
// 	Fixed p(120);
// 	Fixed q(134);
// 	Fixed r(119.99f);
// 	Fixed s(111.32f);
// 	std::cout << std::endl << "		|| COMPARISON OP TESTs ||" << std::endl;
// 	if (p < q)
// 		std::cout << "p(120) is less than q(134)" << std::endl;
// 	else
// 		std::cout << "p(120) is greater than or equal to q(134)" << std::endl;

// 	if (p <= r)
// 		std::cout << "p(120) is less than or equal to r(119.99f)" << std::endl;
// 	else
// 		std::cout << "p(120) is greater than r(119.99f)" << std::endl;

// 	if (r > s)
// 		std::cout << "r(120.66f) is greater than s(111.32f)" << std::endl;
// 	else
// 		std::cout << "r(120.66f) is smaller than or equal to s(111.32f)" << std::endl;
// }

// void arithmetic_test()
// {
// 	Fixed p(120);
// 	Fixed q(134);
// 	Fixed r(119.99f);
// 	Fixed s(111.32f);
// 	std::cout << std::endl << "		|| ARITHMETIC OP TESTs ||" << std::endl;
// 	std::cout << "(+) of p(120) + q(134) is: " << p + q << std::endl;
// 	std::cout << "(-) of r(119.99f) - s(111.32f) is(INT): " << (r - s).toInt() << std::endl;
// 	std::cout << "(-) of r(119.99f) - s(111.32f) is(FLOAT): " << r - s << std::endl;
// 	std::cout << "(*) of p(120) + q(134) is: " << p * q << std::endl;
// 	std::cout << "(/) of r(119.99f) - s(111.32f) is(INT): " << (r / s).toInt() << std::endl;
// 	std::cout << "(/) of r(119.99f) - s(111.32f) is(FLOAT): " << r / s << std::endl;

// }

// void in_de_crement_test()
// {
// 	Fixed a(120);

// 	std::cout << std::endl << "		|| IN/DE-CREMENT OP TESTs ||" << std::endl;
// 	std::cout << "(a)(120): " << a << std::endl;
// 	std::cout << "(++a): " << ++a << std::endl;
// 	std::cout << "(a): " << a << std::endl;
// 	std::cout << "(a++): " << a++ << std::endl;
// 	std::cout << "(a): " << a << std::endl << std::endl;

// 	std::cout << "|| FixedPoint Value ||" << std::endl;
// 	std::cout << "(a)(120): "  << a.getRawBits() << std::endl;
// 	std::cout << "(++a): "  << (++a).getRawBits() << std::endl;
// 	std::cout << "(a): "  << a.getRawBits() << std::endl;
// 	std::cout << "(a++): "  << (a++).getRawBits() << std::endl;
// 	std::cout << "(a): "  << a.getRawBits() << std::endl;

// }

// void min_max_test()
// {
// 	Fixed p(120);
// 	Fixed q(134);
// 	const Fixed r(119.99f);
// 	const Fixed s(111.32f);
// 	std::cout << std::endl << "		|| MIN/MAX TESTs ||" << std::endl;
// 	std::cout << "p(120), q(134), r(119.99f), s(111.32f)" << std::endl;
// 	std::cout << "min(p, q) is: " << Fixed::min(p, q) << std::endl;
// 	std::cout << "min(r, s) is: " << Fixed::min(r, s) << std::endl;
// 	std::cout << "max(p, q) is: " << Fixed::max(p, q) << std::endl;
// 	std::cout << "max(r, s) is: " << Fixed::max(r, s) << std::endl;

// }
