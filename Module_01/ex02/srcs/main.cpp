/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:39:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/30 17:00:43 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;


	std::cout << "ADDRESSES::" << std::endl;
	std::cout << "String Address: " << &str << std::endl;
	std::cout << "Pointer Address: " << &ptr << std::endl;
	std::cout << "Reference Address: " << &ref << std::endl << std::endl;

	std::cout << "VALUES::" << std::endl;
	std::cout << "String Value: " << str << std::endl;
	std::cout << "String Pointer Value: " << *ptr << std::endl;
	std::cout << "Reference Value: " << ref << std::endl;
}
