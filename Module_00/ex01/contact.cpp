/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:12:39 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/15 16:01:15 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std:: string fisrtName, std::string lastName,
				std::string nickName, std::string phoneNumber,
				std::string darkSecret)
{
	this ->fisrt_name = fisrtName;
	this ->last_name = last_name;
	this ->nickname = nickName;
	this ->p_number = phoneNumber;
	this ->d_secret = darkSecret;
}
void Contact::displayContact(void)
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

