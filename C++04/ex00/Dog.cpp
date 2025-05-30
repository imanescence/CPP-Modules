/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:36:06 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 09:07:35 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
        std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog& copy) : Animal(copy){

        std::cout << "Dog copy constructor called" << std::endl;
}


Dog& Dog::operator=(const Dog& copy) {

        std::cout << "Copy assignement operator called" << std::endl;

            if (this != &copy) {
		    Animal::operator=(copy);
		    type = copy.type;
        }
            return *this;
}

Dog::~Dog () {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Waf Waf" << std::endl;
}
