#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	public:
		Contact();
		Contact(std:: string fisrtName, std::string lastName,
				std::string nickName, std::string phoneNumber,
				std::string darkSecret);
		// other function
		void displayList(void);
		void displayContact(int index);
		~Contact();

	private:
		int index;
		std::string fisrt_name;
		std::string last_name;
		std::string nickname;
		std::string p_number;
		std::string d_secret;
};

#endif
