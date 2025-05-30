/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:17:02 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/21 16:13:12 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Array.hpp"

#define MAX_VAL 10

int main()
{
	srand(time(NULL));
	
	std::cout << "----- INT ARRAY -----" << std::endl;
	
	Array<int> intArray(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	
	for (int i = 0; i < MAX_VAL; ++i){
		int value = rand() % 1000;
		intArray[i] = value;
		mirror[i] = value;
	}
	
	std::cout << "Original int array: ";
	intArray.print();
	std::cout << "\n";
	
	Array<int> intCopy = intArray;
	std::cout << "Copied int array: ";
	intCopy.print();
	std::cout << "\n";
	
	for (int i = 0; i < MAX_VAL; ++i)
        	intArray[i] += 1;
	
	std::cout << "Modified original int array: ";
	intArray.print();
	std::cout << "Copy should remain unchanged: ";
	intCopy.print();
	std::cout << "\n";
	
	for (int i = 0; i < MAX_VAL; ++i){
        	if (mirror[i] != intCopy[i]){
            std::cerr << "Values differ at index " << i << std::endl;
            return 1;
        	}
	}
	delete[] mirror;
	
	try {
		intArray[-1] = 0;
	} catch (std::exception& e) {
		std::cerr << "Caught exception (negative index): " << e.what() << std::endl;
	}
	
	try {
		intArray[MAX_VAL] = 0;
	} catch (std::exception& e) {
		std::cerr << "Caught exception (overflow): " << e.what() << std::endl;
	}
	
	std::cout << "\n----- FLOAT ARRAY -----" << std::endl;
	Array<float> floatArray(MAX_VAL);
	
	for (int i = 0; i < MAX_VAL; ++i)
		floatArray[i] = static_cast<float>(rand() % 1000) / 10.0f;
	floatArray.print();

	std::cout << "\n----- STRING ARRAY -----" << std::endl;
	Array<std::string> stringArray(MAX_VAL);
	std::string words[] = {"Bonjour", "Ciao", "Hyvää päivää", "Hallo", "こんにちは", "Hola", "你好", "Привет", "مرحبا"};

	for (int i = 0; i < MAX_VAL; ++i)
		stringArray[i] = words[rand() % 6];

	stringArray.print();

	std::cout << "\n----- EMPTY ARRAY -----" << std::endl;
	Array<int> emptyArray;
	try {
		std::cout << emptyArray[0] << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Caught exception (accessing empty array): " << e.what() << std::endl;
	}

	return 0;
}
