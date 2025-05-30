/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:12:28 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/20 11:57:24 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::cout << "------------ INT ARRAY -----------" << std::endl;
	int arr1[] = {1, 2, 3, 4, 5};
	size_t length1 = 5;
	std::cout << "-> Before increment :" << std::endl;
	iter(arr1, length1, display<int>);
	iter(arr1, length1, increment<int>);
	std::cout << "-> After increment :"<< std::endl;
	iter(arr1, length1, display<int>);
    	std::cout << "\n";

	std::cout << "------------ CONST INT ARRAY -----------" << std::endl;
	const int constArray[] = {10, 25, 30, 40, 50};
	size_t constLength = 5;
	iter(constArray, constLength, display<const int>);
	
	std::cout << "------------ STRINGS ARRAY -----------" << std::endl;
    	std::string arr2[] = {"Hello", "World", "Coucou"};
	size_t length2 = 3;
	iter(arr2, length2, display<std::string>);
	std::cout << "\n";

	std::cout << "------------ CONST STRINGS ARRAY -----------" << std::endl;
	const char* arr3[] = {"Hello", "World", "Test", "Const"};
	size_t length3 = 4;
	iter(arr3, length3, display<const char*>);
	std::cout << "\n";

	std::cout << "------------ FLOATS ARRAY -----------" << std::endl;
	float arr4[] = {1.1f, 2.2f, 3.3f};
	size_t length4 = 3;
	std::cout << "-> Before decrement :" << std::endl;
	iter(arr4, length4, display<float>);
	iter(arr4, length4, decrement<float>);
	std::cout << "-> After decrement :"<< std::endl;
	iter(arr4, length4, display<float>);
    	std::cout << "\n";
	
	std::cout << "------------ DOUBLES ARRAY -----------" << std::endl;
	double arr5[] = {1.11, 2.22, 3.33};
	size_t length5 = 3;
	iter(arr5, length5, display<double>);
	std::cout << "\n";
	
	std::cout << "------------ EMPTY ARRAY -----------" << std::endl;
	int emptyArr[] = {};
	size_t emptyLength = 0;
	iter(emptyArr, emptyLength, display<int>);
	std::cout << "\n";
	
	std::cout << "------------ NULL ARRAY -----------" << std::endl;
	int* nullArray = NULL;
	iter(nullArray, 5, display<int>);
	std::cout << "\n";

	return 0;
}
