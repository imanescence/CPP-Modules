/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:49:22 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/24 14:30:08 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 			_value;
		static const int _bits = 8;

		public:

		// default constructor
		Fixed();
		Fixed(const int integer);
		Fixed(const float floatPoint);

		// copy constructor and copy assignment
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		
		// members functions
		int getRawBits(void) const;
		void setRawBits(int);
		float toFloat() const;
		int toInt() const;

		// comparaison operators
		bool operator>  (const Fixed& other)  const;	
		bool operator<  (const Fixed& other)  const;	
		bool operator>= (const Fixed& other)  const;	
		bool operator<= (const Fixed& other)  const;	
		bool operator== (const Fixed& other)  const;	
		bool operator!= (const Fixed& other)  const;
		
		// aritmetic operators
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		
		// incre/decrementation operators
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// static member functions 
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		// destructor
		~Fixed();
};
std::ostream& operator<<(std::ostream& out, const Fixed& f);
