/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:49:22 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/21 16:19:02 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 			_value;
		// scale factor
		static const int	_bits = 8;

		public:

		// default constructor
		Fixed();

		// copy constructor
		Fixed(const Fixed& copy);

		//copy assignement
		Fixed& operator=(const Fixed& copy);

		// getter and setter
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// constructor converts int to his fixed-point value 
		Fixed(const int fixedPoint);

		// constructor converts float to his fixed-point value 
		Fixed(const float floatPoint);

		// functions that convert fixed-point to int or float
		float toFloat(void) const;
		int toInt(void) const;

		// destructor
		~Fixed();
};

// overload operator to send strings to the standard output like std::cout
// handle the format personnalization :
// 	- can display an object without a getter for ex "std::cout << fixed.getvalue()"
//	- can display an object with a personnalized format like int, str or float
// to resume : customization, cleaner code, flexibility
std::ostream& operator<<(std::ostream& out, const Fixed& f);
