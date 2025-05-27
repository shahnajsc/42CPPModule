/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:12:39 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/16 14:36:22 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(	std:: string fisrtName, std::string lastName,
					std::string nickName, std::string phoneNumber,
					std::string darkSecret)
{
	this ->fisrt_name = fisrtName;
	this ->last_name = lastName;
	this ->nickname = nickName;
	this ->p_number = phoneNumber;
	this ->d_secret = darkSecret;
}

std::string trunccateData(std::string data)
{
	std::string newString;

	if (data.size() > 10)
	{
		newString = data.substr(0, 9) + ".";
		return (newString);
	}
	return (data);
}

void Contact::getListElement(int index)
{
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << trunccateData(this->fisrt_name) << "|"; // need to truncate
	std::cout << std::setw(10) << trunccateData(this->last_name) << "|";
	std::cout << std::setw(10) << trunccateData(this->nickname) << "|";
	std::cout << std::endl;
}

void Contact::getContactDetails(void)
{
	std::cout << "First Name: " << this ->fisrt_name << std::endl;
	std::cout << "Last Name: " << this ->last_name << std::endl;
	std::cout << "Nickname: " << this ->nickname << std::endl;
	std::cout << "Phone Number: " << this ->p_number << std::endl;
	std::cout << "Darkest Secret: " << this ->d_secret << std::endl;
}

Contact::~Contact()
{
}

