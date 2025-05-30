/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <aitouflih.iman@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:04:13 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/01/21 13:56:15 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sstream> 
#include <iostream>
#include <string>
#include <cstdlib>
#include "phonebook.hpp"
#include "contact.hpp"

// Some explanations of new notions : 
// 		------------- "std::cin" -----------
// 		Fetch datas from input : "cin" means Character Input oftenly used with 
// 		">>" the extraction operator 
// 		Example : declare a var -> "int n;" then fetch an int from input "std::cin >> n;"
//		To get some strings we can use the getline fctn from iostream library to use like follow :
//		std::getline(std::cin, the_str_i_declared);
//		getline read the entire line until a \n, cin reads only one data and stop at //		 the first space or \n
//
//		---------- "MyClass& myClass" -------
//		This is passing a reference to the class object, the function directly accesses to the original object instead of create an unnecessary copy which is a gain of time and memory -> performance gain.
//		In this exercise we need to modify the original object, without reference changes would only apply to a local copy this is not what we are searching  for the 80s style PhoneBook.
//		Furthermore, we need to check for the security if a pointer is NULL but a reference is always valid if it's initialized, better for the surety.
//		------------ "std::string myStr" ---------
//		String declaration, nothing else to do. 

void ctrl_d_handler(std::istream& input) {
		if (input.eof()) {
		std::cout << "ヾ(＾ ∇ ＾) BYE BYE" << std::endl;
		exit(0);
		}
}

void promptAddContact(PhoneBook& phoneBook) {
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	
	std::cout << "Enter First Name: ";
	ctrl_d_handler(std::cin);
	std::getline(std::cin, firstName);

	std::cout << "Enter Last Name: ";
	ctrl_d_handler(std::cin);
	std::getline(std::cin, lastName);

	std::cout << "Enter Nickname: ";
	ctrl_d_handler(std::cin);
	std::getline(std::cin, nickName);

	std::cout << "Enter Phone Number: ";
	ctrl_d_handler(std::cin);
	std::getline(std::cin, phoneNumber);

	std::cout << "Enter Darkest Secret: ";
	ctrl_d_handler(std::cin);
	std::getline(std::cin, darkestSecret);
	
	if (firstName.empty() || lastName.empty() || nickName.empty() ||
        phoneNumber.empty() || darkestSecret.empty()) {
		std::cout << "All fields must be filled. Contact not added." << std::endl;
	}
	
	else {
		Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
		phoneBook.addContact(newContact);
		std::cout << "Contact added successfully ! (☞ ͡° ͜ʖ ͡°)☞" << std::endl;
	}
}

void promptSearchContact(PhoneBook& phoneBook) {
	phoneBook.searchContacts();
	if (phoneBook.isEmpty()) {
		return;
	}

	std::cout << "Enter the index of the contact : ";
	std::string input;
	std::getline(std::cin, input);
	
	std::stringstream ss(input);
	int index;
	ss >> index;

	ctrl_d_handler(std::cin);
	
	if (ss.fail() || !ss.eof()) {
		std::cout << ("Only digits for a valid index 𝟏𝟐𝟑𝟒𝟓𝟔𝟕𝟖 !") << std::endl;
		return;
	}
	else if (index < 0 || index > 7) {
		std::cout << ("The index is out of range !") << std::endl;
	}
	else
		phoneBook.displayContact(index);
}

int main()
{
	PhoneBook phBook;
	std::string cmd;

	std::cout << "˚₊‧꒰ა ☆ ໒꒱ ‧₊˚ Please fill me ! ˚₊‧꒰ა ☆ ໒꒱ ‧₊˚" << std::endl;
	
	while (true) {
		
		std::cout << "Enter a command -> ADD, SEARCH, or EXIT : ";
		std::getline (std::cin, cmd);
		
		if      (cmd == "ADD")    {
			promptAddContact (phBook);
		}
		else if (cmd == "SEARCH") {
			promptSearchContact (phBook);
		}
		else if (cmd == "EXIT" || std::cin.eof())   {
			std::cout << "ヾ(＾ ∇ ＾) BYE BYE" << std::endl;
			break;
		}
		else {
			std::cout << "( •̯́ ₃ •̯̀) Oops, invalid command ! Try ADD or SEARCH or EXIT" << std::endl;
		}
	}

	return (0);
}
