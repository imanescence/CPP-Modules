/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:38:50 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 17:02:34 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <ctime>
#include <cstdlib>

class Span {
	
	private:
		size_t _N;
		std::vector<int>vec;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& copy);

		void addNumber(int element);
		int shortestSpan();
		int longestSpan();
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end) {
			size_t nbElements = std::distance(begin, end);
			
			if (vec.size() + nbElements > _N)
				throw std::runtime_error("not enough space to add these elements");
			vec.insert(vec.end(), begin, end);
		}

		~Span();

};
