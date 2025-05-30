/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:32:29 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 09:23:19 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Dolphin") {

	std::cout << "Wrong Animal default constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type){

	std::cout << "Wrong Animal copy constructor called" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {

	std::cout << "Wrong Animal copy assignement operator called" << std::endl;

            if (this != &copy) {
		    type = copy.type;
    	}
	    return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal makes a sound : krrr krrrkrrrr" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong animal destructor called" << std::endl;
}
