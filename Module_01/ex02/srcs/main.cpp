/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:39:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 17:07:17 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;


	std::cout << "ADDRESSES::" << std::endl;
	std::cout << "Address of String : " << &string << std::endl;
	std::cout << "Address Held by Pointer: " << stringPTR << std::endl;
	std::cout << "Address Held by Reference:" << &stringREF  << std::endl;

	std::cout << std::endl << "VALUES::" << std::endl;
	std::cout << "Value of String: " << string << std::endl;
	std::cout << "Value Pointed to by Pointer : " << *stringPTR << std::endl;
	std::cout << "Value Pointed to by Reference : " << stringREF << std::endl;
}
