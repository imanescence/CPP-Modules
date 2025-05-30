/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:26:34 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/16 15:48:36 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	rawInput = "0";
	input = 0;
}

ScalarConverter::ScalarConverter(std::string _rawInput) : rawInput(_rawInput) {
	input = 0;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : rawInput(copy.rawInput), input(copy.input) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) {

	if (this != &copy) {
		rawInput = copy.rawInput;
		input = copy.input;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

std::string ScalarConverter::getRawInput() const {
	return rawInput;
}

double ScalarConverter::getInput() const {
	return input;
}

void ScalarConverter::converter(std::string rawInput) {
	
	bool specialCases = false;
	double value = 0;

	if (rawInput == "-inf" || rawInput == "-inff"
	    || rawInput == "+inf" || rawInput == "+inff" || rawInput == "nan")
		specialCases = true;
	
	if (specialCases) {
		if (rawInput == "-inf" || rawInput == "-inff")
			value = -INFINITY;
		else if (rawInput == "+inf" || rawInput == "+inff")
			value = INFINITY;
		else if (rawInput == "nan" || rawInput == "nanf")
			value = NAN;
	}
	else
		value = strtod(rawInput.c_str(), NULL);

	if (value > CHAR_MAX || value < CHAR_MIN || specialCases)
		displayTypes("impossible", "char", true);
	else {
		if (isprint(static_cast<char>(value))) 
			displayTypes(static_cast<char>(value), "char");
		else
			displayTypes("Non displayable", "char");
	}

	if (value > INT_MAX || value < INT_MIN || specialCases)
		displayTypes("impossible", "int", true);
	else
		displayTypes(static_cast<int>(value), "int");

	if (specialCases) {
		displayTypes(rawInput, "float");
		displayTypes(rawInput, "double");
	}
	else {
		if (value > FLT_MAX || value <= -FLT_MAX)
			displayTypes("impossible", "float", true);
		else
			displayTypes(static_cast<float>(value), "float");
	
		if (value > DBL_MAX || value <= -FLT_MAX)
			displayTypes("impossible", "double", true);
		else
			displayTypes(static_cast<double>(value), "double");
	}
}	

