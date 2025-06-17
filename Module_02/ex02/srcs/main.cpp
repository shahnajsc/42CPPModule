/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/17 14:20:12 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void comparison_test();
void arithmetic_test();
void in_de_crement_test();
void min_max_test();

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::endl << "		|| DEFAULT TESTs ||" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	comparison_test();
	arithmetic_test();
	in_de_crement_test();
	min_max_test();
	return 0;
}

void comparison_test()
{
	Fixed p(120);
	Fixed q(134);
	Fixed r(119.99f);
	Fixed s(111.32f);
	std::cout << std::endl << "		|| COMPARISON OP TESTs ||" << std::endl;
	if (p < q)
		std::cout << "p(120) is less than q(134)" << std::endl;
	else
		std::cout << "p(120) is greater than or equal to q(134)" << std::endl;

	if (p <= r)
		std::cout << "p(120) is less than or equal to r(119.99f)" << std::endl;
	else
		std::cout << "p(120) is greater than r(119.99f)" << std::endl;

	if (r > s)
		std::cout << "r(120.66f) is greater than s(111.32f)" << std::endl;
	else
		std::cout << "r(120.66f) is smaller than or equal to s(111.32f)" << std::endl;
}

void arithmetic_test()
{
	Fixed p(120);
	Fixed q(134);
	Fixed r(119.99f);
	Fixed s(111.32f);
	std::cout << std::endl << "		|| ARITHMETIC OP TESTs ||" << std::endl;
	std::cout << "(+) of p(120) + q(134) is: " << p + q << std::endl;
	std::cout << "(-) of r(119.99f) - s(111.32f) is(INT): " << (r - s).toInt() << std::endl;
	std::cout << "(-) of r(119.99f) - s(111.32f) is(FLOAT): " << r - s << std::endl;
	std::cout << "(*) of p(120) + q(134) is: " << p * q << std::endl;
	std::cout << "(/) of r(119.99f) - s(111.32f) is(INT): " << (r / s).toInt() << std::endl;
	std::cout << "(/) of r(119.99f) - s(111.32f) is(FLOAT): " << r / s << std::endl;

}

void in_de_crement_test()
{
	Fixed a(120);

	std::cout << std::endl << "		|| IN/DE-CREMENT OP TESTs ||" << std::endl;
	std::cout << "(a)(120): " << a << std::endl;
	std::cout << "(++a): " << ++a << std::endl;
	std::cout << "(a): " << a << std::endl;
	std::cout << "(a++): " << a++ << std::endl;
	std::cout << "(a): " << a << std::endl << std::endl;

	std::cout << "|| FixedPoint Value ||" << std::endl;
	std::cout << "(a)(120): "  << a.getRawBits() << std::endl;
	std::cout << "(++a): "  << (++a).getRawBits() << std::endl;
	std::cout << "(a): "  << a.getRawBits() << std::endl;
	std::cout << "(a++): "  << (a++).getRawBits() << std::endl;
	std::cout << "(a): "  << a.getRawBits() << std::endl;

}

void min_max_test()
{
	Fixed p(120);
	Fixed q(134);
	const Fixed r(119.99f);
	const Fixed s(111.32f);
	std::cout << std::endl << "		|| MIN/MAX TESTs ||" << std::endl;
	std::cout << "p(120), q(134), r(119.99f), s(111.32f)" << std::endl;
	std::cout << "min(p, q) is: " << Fixed::min(p, q) << std::endl;
	std::cout << "min(r, s) is: " << Fixed::min(r, s) << std::endl;
	std::cout << "max(p, q) is: " << Fixed::max(p, q) << std::endl;
	std::cout << "max(r, s) is: " << Fixed::max(r, s) << std::endl;

}
