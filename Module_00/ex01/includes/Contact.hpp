#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	public:
		Contact();
		Contact(	const std::string &fisrtName, const std::string &lastName,
					const std::string &nickName, const std::string &phoneNumber,
					const std::string &darkSecret);

		void getListElement(int index) const;
		void getContactDetails(void) const;

		~Contact();

	private:
		std::string fisrt_name;
		std::string last_name;
		std::string nickname;
		std::string p_number;
		std::string d_secret;
};

#endif
