/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:13:21 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/21 15:51:50 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>

template <typename T, typename Function>

void iter(T* array, size_t length, Function F) {

	if (!array)
		std::cout << "Error : array doesnt exist" << std::endl;
	else {
		for (size_t i = 0; i < length; i++) {
			F(array[i]);
		}
	}
}

template <typename T>
void display(T& value) {
    std::cout << value << std::endl;
}

template <typename T>
void increment(T& value) {
	++value;
}

template <typename T>
void decrement(T& value) {
	--value;
}
