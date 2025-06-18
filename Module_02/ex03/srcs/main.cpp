/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:47:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/18 14:19:25 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int main( void )
{

Point const a(0.0f, 0.0f);
Point const b(6.0f, 0.0f);
Point const c(3.0f, 6.0f);

Point const p1(0.0f, 0.0f);
if (bsp(a, b, c, p1))
	std::cout << "\033[36m" << "Point 1 is inside the triangle!" << std::endl;
else
	std::cout << "\033[31m" << "Point 1 is outside of the triangle!" << std::endl;

Point const p2(4.0f, 2.0f);
if (bsp(a, b, c, p2))
	std::cout << "\033[36m" << "Point 2 is inside the triangle!" << std::endl;
else
	std::cout << "\033[31m" << "Point 2 is outside of the triangle!" << std::endl;

Point const p3(2.0f, 2.0f);
if (bsp(a, b, c, p3))
	std::cout << "\033[36m" << "Point 3 is inside the triangle!" << std::endl;
else
	std::cout << "\033[31m" << "Point 3 is outside of the triangle!" << std::endl;

Point const p4(2.0f, 0);
if (bsp(a, b, c, p4))
	std::cout << "\033[36m" << "Point 4 is inside the triangle!" << std::endl;
else
	std::cout << "\033[31m" << "Point 4 is outside of the triangle!" << std::endl;

Point const p5(4, 4);
if (bsp(a, b, c, p5))
	std::cout << "\033[36m" << "Point 5 is inside the triangle!" << std::endl;
else
	std::cout << "\033[31m" << "Point 5 is outside of the triangle!" << std::endl;

return 0;
}
