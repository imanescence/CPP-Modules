/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <aitouflih.iman@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:26:19 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/01/20 11:44:29 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
private:
	Contact _contacts[8]; // Array of 8 contacts maximum
	int _contactCount;    // Count of actual contacts
	int _oldestIndex;     // To know the oldest contact and erase it if we exceed
			      // the count maximum of contacts

	std::string truncate(const std::string& str) const {
		if (str.length() > 10)
			return str.substr(0, 9) + ".";
		return str;
	}

public:
	// Constructor : initialization of counters
    	PhoneBook() : _contactCount(0), _oldestIndex(0) {}

	// Add a contact
	void addContact(const Contact& newContact) {
		if (_contactCount < 8) {
			_contacts[_contactCount] = newContact;
			_contactCount++;
		}
		else {
			_contacts[_oldestIndex] = newContact; // Erase the oldest contact
			_oldestIndex = (_oldestIndex + 1) % 8; // Update the index 
							       // of the oldest contact
		}
	}

	// Display the saved contacts
	void searchContacts() const {
		if (_contactCount == 0) {
			std::cout << " ⃠ The PhoneBook is empty ! ^•ﻌ•^" << std::endl;
		return;
	}

	// Display the table of the titles with the space of 10 char each column
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	std::cout 	<< std::string(43, '-') << std::endl;

	// Display the contacts with the truncate str of 10 char
        for (int i = 0; i < _contactCount; i++) {
            std::cout 	<< std::setw(10) << i << "|"
                      	<< std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
                      	<< std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
                      	<< std::setw(10) << truncate(_contacts[i].getNickName()) << std::endl;
        	}
    	}

	// Display the contact with entire infos searched by its index
	void displayContact(int index) const {
		if (index < 0 || index >= _contactCount) {
			std::cout << "Invalid index!" << std::endl;
		return;
	}

	const Contact& contact = _contacts[index];
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	}

	// Check if the list of contacts is empty
	bool isEmpty() const {
		return _contactCount == 0;
	}
};

#endif

