/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:15:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/20 16:06:49 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& copy) : value(copy.value) {
	std::cout << "Copy constructor called" << std::endl;
}


// operator assignation returns a current object reference Fixed type
// "Fixed::operator" define how an object can be assigned to another object
// here is a const reference to the copy to avoid useless copy and be sure 
// the object concerned and passed will not be modified

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	    if (this != &copy) { // security to avoid auto-assignation (modify the
				 // object with its own values)
        value = copy.value;
    }
	return *this; 		// reference to the object with deference of pointer this
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}


void Fixed::setRawBits (int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}


