/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:42:30 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/11 11:38:37 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	// INITIALIZATIONS

	// string initialized
	std::string str = "HI THIS IS BRAIN";

	// pointer to the string
	std::string* stringPTR = &str;

	// reference to the string
	std::string& stringREF = str;

	// PRINT MEMORY ADDRESSES
	
	std::cout << "Memory address : String variable   ☞ " << &str << std::endl;
	std::cout << "Memory address : String pointer    ☞ " << stringPTR << std::endl;
	std::cout << "Memory address : String reference  ☞ " << &stringREF << std::endl << std::endl << std::endl;
	
	// PRINT VALUES
		
	std::cout << "Value : String variable            ☞ " << str << std::endl;
	std::cout << "Value : String pointer             ☞ " << *stringPTR << std::endl;
	std::cout << "Value : String reference           ☞ " << stringREF << std::endl;

	return (0);
}
