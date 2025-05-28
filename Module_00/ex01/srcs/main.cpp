/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:17:57 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/28 11:15:33 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string action;

	std::cout << "Welcome to PHONEBOOK" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Enter your prefered action from(ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, action);
		if (action == "ADD")
			phonebook.addContact();
		else if (action == "SEARCH")
			phonebook.searchContactList();
		else if (action == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "Wrong action: only (ADD, SEARCH, EXIT) are allowed" << std::endl;
	}
	return (0);
}
