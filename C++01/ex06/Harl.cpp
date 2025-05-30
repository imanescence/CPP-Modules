/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:57:51 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/17 14:24:34 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {

	// array of pointers on functions member private
	void (Harl::*complainFunctions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4) {
		if (level == levels[i])
			break ;
		i++;
	}

	switch (i) {
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			(this->*complainFunctions[0])();
			std::cout << std::endl;
			/* fall-through */
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			(this->*complainFunctions[1])();
			std::cout << std::endl;
			/* fall-through */
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			(this->*complainFunctions[2])();
			std::cout << std::endl;
			/* fall-through */
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*complainFunctions[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
