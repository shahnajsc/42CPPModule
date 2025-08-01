/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:24:18 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/28 11:27:11 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()  : count(0)
{
}

PhoneBook::~PhoneBook()
{
}

bool isWhiteSpace(const std::string &data)
{
	if (data.empty())
		return (1);
	std::string::size_type i;
	for (i = 0; i < data.size(); i++)
	{
		if (data[i] == ' ')
			return (1);
	}
	return (0);
}

bool isValidPhoneNumber(const std::string &data)
{
	if (data.empty())
		return (0);
	std::string::size_type i;
	std::string::size_type j = 0;
	if (data[0] == '+')
		j = 1;
	for (i = j; i < data.size(); i++)
	{
		if (!isdigit(data[i]))
			return (0);
	}
	return (1);
}

std::string getContactData(const std::string &msg, int type)
{
	std::string data;

	std::cout << msg << std::endl;
	while (!std::cin.eof())
	{
		std::getline(std::cin, data);
		if (type == 1)
		{
			if (isValidPhoneNumber(data))
				break ;
			else
			{
				std::cout << "Invalid format. Enter Phone Number Again: " << std::endl;
					continue ;
			}
		}
		else
		{
			if (!isWhiteSpace(data))
				break ;
			else
			{
				std::cout << "Invalid format. Enter Again: " << std::endl;
					continue ;
			}
		}
	}
	return (data);
}

void PhoneBook::addContact(void)
{
	std::string	fisrtName = getContactData("Enter First Name", 0);
	std::string	lastName  = getContactData("Enter Last Name", 0);
	std::string	nickName  = getContactData("Enter Nickname", 0);
	std::string	phoneNumber  = getContactData("Enter Phone Number", 1);
	std::string	darkSecret  = getContactData("Enter Your Darkest SECRET!!!", 0);

	Contact contact(fisrtName, lastName, nickName, phoneNumber, darkSecret);

	static  int i = 0;
	this->contacts[i] = contact;
	i = (i + 1) % 8;
	if (this->count < 8)
		this->count++;
	if (!std::cin.eof())
		std::cout << "Successfully added new contact!" << std::endl;
}

void PhoneBook::displayList(void) const
{
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|";
	std::cout << std::endl;
	for (int i = 0; i < this->count; i++)
	{
		this->contacts[i].getListElement(i);
	}
}

void PhoneBook::searchContactList(void) const
{
	if (this->count == 0)
	{
		std::cout << "No Saved Contacts!!!!" << std::endl;
		return ;
	}
	this->displayList();
	std::string index;
	while (!std::cin.eof()) {
		std::cout << "Enter the index(1 - " << this->count << ") to see contact details" << std::endl;
		std::getline(std::cin, index);

		if (std::cin.eof())
			break;
		if (index.size() != 1 || index[0] < '1' || index[0] > '8') {
			std::cout << "Wrong Index: Try again: " << std::endl;
			continue;
		}
		if (index[0] - '0' > this->count) {
			std::cout << "No Contact Found. Try Again: " << std::endl;
			continue;
		}
		int i = index[0] - '0' - 1;
		this->contacts[i].getContactDetails();
		break;
	}
}
