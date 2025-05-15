/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:24:18 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/15 15:37:42 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
	std::string data;
	int i = 0;

	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, data);
	std::string	fisrtName = data;

	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, data);
	std::string	lastName = data;

	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, data);
	std::string	nickName = data;

	std::cout << "Enter Phone Number" << std::endl;
	std::getline(std::cin, data);
	std::string	phoneNumber = data;

	std::cout << "Enter The Darkest Secret!!!" << std::endl;
	std::getline(std::cin, data);
	std::string	darkSecret = data;

	Contact contact(fisrtName, lastName, nickName, phoneNumber, darkSecret);
	std::cout << "Thank You!! Successfully saved" << std::endl << std::endl;

	// std::string cont_info;

	// while (!std::cin.eof())
	// {
	// 	std::cout << "Enter First Name" << std::endl;

	// 	std::cout << "Enter Last Name" << std::endl;
	// 	std::cout << "Enter NickName" << std::endl;
	// 	std::cout << "Enter Phone Number" << std::endl;
	// 	std::cout << "Enter Your Darkest Sectet!!!" << std::endl;
	// }

	//std::getline(std::cin, PhoneBook.cotacts.first);
}

void PhoneBook::displayList(void)
{
	Contact contact;
	contact.displayContact();
	//std::getline(std::cin, PhoneBook.cotacts.first);
}

// void displayContact(int index)
// {
// 	std::cout << "Here is yoour PhoneBook" << std::endl;
// 	//std::getline(std::cin, PhoneBook.cotacts.first);
// }
