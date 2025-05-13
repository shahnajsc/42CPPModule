/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:24:18 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/13 17:50:19 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Contact
// {
// 	private:
// 		std::string name;
// 		std::string pnumber;
// };

// class PhoneBook
// {
// 	private:
// 		Contact contacts[8];
// 		int count;
// };

int main(int argc, char **argv)
{
	std::string action;

	if (argc != 1)
		std::cout << "Error: More then one arguments" << std::endl;
	std::cout << "Enter one of your prefered action from(ADD, SEARCH, EXIT)" << std::endl;
	std::getline(std::cin, action);
	if (action == "ADD")
		std::cout << action << std::endl;
	else
		std::cout << "No Action" << std::endl;
}
