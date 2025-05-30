/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:39:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 09:22:54 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "Catzo";
        std::cout << "Wrong Cat default constructor called" << std::endl;
}


WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){

        std::cout << "Wrong Cat copy constructor called" << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat& copy) {

        std::cout << "Wrong Cat copy assignement operator called" << std::endl;

            if (this != &copy) {
		    WrongAnimal::operator=(copy);
		    type = copy.type;
        }
            return *this;
}

WrongCat::~WrongCat () {
        std::cout << "Wrong Cat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
        std::cout << "Meh Meh" << std::endl;
}
