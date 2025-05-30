/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:34:35 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/22 11:09:23 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <cctype>
#include <cfloat>
#include <iomanip>
#include <cmath>

template <typename T>
void displayTypes(T value, std::string type, bool impossible = false) {
	
	if (impossible)
		std::cout << type << ": impossible" << std::endl;
	else {
		if (type == "float")
			std::cout << type << " : " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
		else
			std::cout <<type << " : " << value << std::endl;
	}
}

class ScalarConverter {
	public :
		void static converter(std::string rawInput);

		std::string getRawInput() const;
		double getInput() const;

	private :
		ScalarConverter();
		ScalarConverter(std::string _rawInput);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter &copy);
		~ScalarConverter();

		std::string rawInput;
		double	    input;
};
