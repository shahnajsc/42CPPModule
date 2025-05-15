/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:24:07 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/15 15:38:03 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		// other function
		void addContact();
		void displayList();
		//void displayContact(int index);
		~PhoneBook();

	private:
		Contact contacts;
		int count;
};

#endif
