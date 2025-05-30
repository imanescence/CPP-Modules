/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:30:15 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 16:38:40 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
	srand(time(0));
	
	std::vector<int> vec;

	for (int i = 0; i < 20; ++i) {
		vec.push_back(rand() % 101);
	}
	
	std::cout << "Here are all the values of the vector : ";

	for (size_t i = 0; i < vec.size(); ++i) {
		std::cout << vec[i] << " | ";
	}

	std::cout << std::endl;

	int randomIndex = rand() % vec.size();
	int toFind = vec[randomIndex];

	std::cout << "The value to find is : " << toFind << " ...";

	try {
		std::vector<int>::iterator it = easyfind(vec, toFind);
		std::cout << " and " << *it << " been found !" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
