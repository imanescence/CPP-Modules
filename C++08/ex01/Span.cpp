/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:44:11 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 16:57:30 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(static_cast<size_t>(N)) {}

Span::Span(const Span& copy) : _N(copy._N) {}

Span& Span::operator=(const Span& copy) {
	if (this != &copy) 
		_N = copy._N;
	return *this;
}

void Span::addNumber(int element) {
	if (vec.size() >= _N)
		throw std::runtime_error("the vector is full");
	vec.push_back(element);
}

int Span::shortestSpan() {
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("cannot compare : vector empty or only one element");

	sort(vec.begin(), vec.end());
	
	int shortestSpan = INT_MAX;
	for (std::vector<int>::iterator it = vec.begin() + 1; it != vec.end(); ++it) {
		int diff = *it - *(it - 1);
		if (diff < shortestSpan)
			shortestSpan = diff;
	}
	return (shortestSpan);
}

int Span::longestSpan() {
	
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("cannot compare : vector empty or only one element");
	
	std::vector<int>::iterator min = std::min_element(vec.begin(), vec.end());
	std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
	return (*max - *min);
}

Span::~Span() {}
