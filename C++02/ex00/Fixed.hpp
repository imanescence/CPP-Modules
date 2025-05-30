/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:49:22 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/20 15:27:42 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {
	private:
		int 			value;
		static const int	bits = 8;

	public:
		// default constructor : initializing the object to default values
		Fixed();

		// copy constructor : create a new object as a copy of existing object with
		// same values
		Fixed(const Fixed& copy);

		// assignation operator : allows one object to be assigned the value of another
		// object of the same classe and replacing is current state
		Fixed& operator=(const Fixed& copy);

		// members functions
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// destructor
		~Fixed();
};

// Why canonical orthodox form (OCF) ?
//
// Proper creation and destruction steps with safe copies do not leave the objects in a
// incomplete or corrupted state
//
// Makes the code more predictable easier to maintain and avoid hard to dectect errors
// to the ressource management
//
// In particulary avoid leaks and memory management bc C++ has no garbage collector
// 	-> the destructor free the memory
// 	-> copy constructor and assignation operator = deep copies != shallow copies
//	 deep copies are essential if u want to copy an object or assign 2 objects to
//	 not share the same memory and avoir for example the dangling pointers where 
//	 the memory is freed but still referenced or leaks or deg fault

