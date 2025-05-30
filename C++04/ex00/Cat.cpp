/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:39:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 09:09:51 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
        std::cout << "Cat default constructor called" << std::endl;
}


Cat::Cat(const Cat& copy) : Animal(copy){

        std::cout << "Cat copy constructor called" << std::endl;
}


Cat& Cat::operator=(const Cat& copy) {

        std::cout << "Cat copy assignement operator called" << std::endl;

            if (this != &copy) {
		    Animal::operator=(copy);
		    type = copy.type;
        }
            return *this;
}

Cat::~Cat () {
        std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
        std::cout << "Mi Mi" << std::endl;
}
