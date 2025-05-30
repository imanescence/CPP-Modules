/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:39:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 12:04:23 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/*Cat::Cat() : Animal("Cat") {
        std::cout << "Cat default constructor called" << std::endl;
}
 DOIS JE LAISSRE CONSTTCUERUU DEFO ?
 */

Cat::Cat() : Animal() {
	_Brain = new Brain();
        type = "Cat";
        std::cout << "Brain of cat constructor called" << std::endl;
}


Cat::Cat(const Cat& copy) : Animal(copy){
	_Brain = new Brain(*copy._Brain);
	type = copy.type;
        std::cout << "Cat copy constructor called" << std::endl;
}


Cat& Cat::operator=(const Cat& copy) {

        std::cout << "Cat copy assignement operator called" << std::endl;
            
	if (this != &copy) {
		Animal::operator=(copy); // copy part of Animal

		delete _Brain; // free the memory in case of _Brain already exists
		
		_Brain = new Brain(*copy._Brain); // deeep copy

		type = copy.type;
        }
            return *this;
}

Cat::~Cat () {
	delete _Brain;
        std::cout << "Cat and brain destructors called" << std::endl;
}

void Cat::makeSound() const {
        std::cout << "Mi Mi" << std::endl;
}

Brain* Cat::getBrain() {
	return _Brain;
}

void Cat::getBrainIdeas() {
	_Brain->getIdeas();
}
