/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:15:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/24 14:29:51 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float floatPoint) : _value(static_cast<int>(roundf(floatPoint * (1 << _bits)))) {
        std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _value(copy._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	    if (this != &copy) {
        _value = copy._value;
    }
	return *this;
}

int Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits (int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::Fixed(const int integer) : _value(integer) {
	std::cout << "Int constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _bits);
}

//int Fixed::toInt(void) const {
//	return _value;
//}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

// max
Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->_value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->_value != other._value;
}


Fixed Fixed::operator+(const Fixed& other) const {
	Fixed rslt;

	rslt._value = this->_value + other._value;
	return rslt;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed rslt;

	rslt._value = this->_value - other._value;
	return rslt;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed rslt;

	rslt._value = this->_value * other._value;
	return rslt;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed rslt;

	rslt._value = this->_value / other._value;
	return rslt;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

Fixed& Fixed::operator++() {
	++_value;
	return *this;
}

Fixed& Fixed::operator--() {
	--_value;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f) {
    out << f.toFloat(); // Use the toFloat method to print the value
    return out;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
