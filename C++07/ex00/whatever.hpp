/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:53:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/17 14:05:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {

	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(T a, T b) {

	if (a > b)
		return a;
	return b;
}
