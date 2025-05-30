/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:15:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/21 16:43:53 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}


// copy constructor
Fixed::Fixed(const Fixed& copy) : _value(copy._value) {
	std::cout << "Copy constructor called" << std::endl;
}

// copy assignement
Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	    if (this != &copy) {
        _value = copy._value;
    }
	return *this;
}

// getter
int Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

// setter
void Fixed::setRawBits (int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

// float is mutiplicated by 2pow8 (8 scale fator) in fact 256 then cast in int
// with roundf step which roundup to the next int to avoid fraction after scale step
Fixed::Fixed(const float floatPoint) : _value(static_cast<int>(roundf(floatPoint * (1 << _bits)))) {
	std::cout << "Float constructor called" << std::endl;
}

// move the integer to 8 bits on the left which create the space for the fractionnal part
// of 8 precision bits here 
Fixed::Fixed(const int integer) : _value(integer << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

// to resume : make some space for the fractionnal part of int with the bitshifting to the left
// rescale de fractionnal part of the float with the wanted scale (8 here) and roundup the decimal
// rest to create a decimal part with only integers
// Fixed point = integer part + (fractionnal part / 2 pow n (here n = 8)) 


// fixed to float = reverse way with a division of 2 pow 8
float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _bits);
}

// fixed to int = reverse way with a division of 2 pow 8 and bitshift to the right which results only
// the integer part
int Fixed::toInt(void) const {
	return _value >> _bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f) {
    out << f.toFloat(); // Use the toFloat method to print the value
    return out;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
