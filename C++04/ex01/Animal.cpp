/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:32:29 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 09:03:57 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Pinguin") {

	std::cout << "Default constructor called" << std::endl;
}


Animal::Animal(const Animal& copy) : type(copy.type){

	std::cout << "Copy constructor called" << std::endl;
}


Animal& Animal::operator=(const Animal& copy) {

	std::cout << "Copy assignement operator called" << std::endl;

            if (this != &copy) {
		    type = copy.type;
    	}
	    return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
