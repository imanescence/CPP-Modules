/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:16:35 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 12:00:10 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = "💡";
	}
	std::cout << "Brain default constructor called "<< std::endl;
}

Brain::Brain(const Brain& copy) {
	(void)copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {

	(void)copy;
	std::cout << "Brain copy assignement operator called" << std::endl;
	return *this;
}

void Brain::getIdeas() {
	for (int i = 0; i < 100; ++i) {
		std::cout << i << "->" << ideas[i] << std::endl;
	}

}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
