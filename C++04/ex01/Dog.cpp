/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:36:06 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 12:01:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Dog::Dog() : Animal() {
	type = "Dog";
        std::cout << "Dog default constructor called" << std::endl;
}
JE DOIS LAIISER UN CONSTRCUTEUR PAR DEFAULT ??
*/

Dog::Dog() : Animal() {
	_Brain = new Brain();
	type = "Dog";
        std::cout << "Brain of Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){
	_Brain = new Brain(*copy._Brain);
	type = copy.type;
        std::cout << "Dog copy constructor called" << std::endl;
}


Dog& Dog::operator=(const Dog& copy) {

        std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy); // copy of Animal part
		
		delete _Brain; // free the mem in case of already exists
	
		_Brain = new Brain(*copy._Brain); // deep copy
		
		type = copy.type;
        }
            return *this;
}

Dog::~Dog () {
	delete _Brain;
	std::cout << "Dog and brain destructors called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Waf Waf" << std::endl;
}

Brain* Dog::getBrain() {
	return _Brain;
}

void Dog::getBrainIdeas() {
	_Brain->getIdeas();
}
