/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:41:45 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 17:09:56 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(20000);
	
	srand(time(0));

        std::vector<int> vec;

	for (int i = 0; i < 20000; ++i) {
                vec.push_back(rand() % 101);
        }

        std::cout << "Here are all the values of the vector : ";

        for (size_t i = 0; i < vec.size(); ++i) {
                std::cout << vec[i] << " | ";
        }
	
	sp.addNumbers(vec.begin(), vec.end());
        
	std::cout << std::endl;

	std::cout << "\n";

	std::vector<int>::iterator minIt = std::min_element(vec.begin(), vec.end());
	std::vector<int>::iterator maxIt = std::max_element(vec.begin(), vec.end());
	
	std::cout << "Minimum value: " << *minIt << std::endl;
	std::cout << "Maximum value: " << *maxIt << std::endl;

	std::cout << "\n";

	std::cout << "The shortest span is : " << sp.shortestSpan() << std::endl;
	
	std::cout << "\n";
	
	std::cout << "The longest span is : " << sp.longestSpan() << std::endl;

	return 0;
}
