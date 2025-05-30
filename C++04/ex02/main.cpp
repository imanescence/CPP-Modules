/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 17:39:07 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testDeepCopy() {
    std::cout << "\n";
    std::cout << "Test for Dog:" << std::endl;

    Dog original;// default constructor
    Dog copy = original; // copy constructor
    
    std::cout << "\n";

    // Compare 2 mem addresses to prove this is deep copy : they dont share the same
    std::cout << "Original Dog Brain address: " << original.getBrain() << std::endl;
    std::cout << "Copied Dog Brain address: " << copy.getBrain() << std::endl;

    std::cout << "\nTest for Cat:" << std::endl;

    Cat originalCat; 
    Cat copyCat = originalCat; 

    std::cout << "\n";
    std::cout << "Original Cat Brain address: " << originalCat.getBrain() << std::endl;
    std::cout << "Copied Cat Brain address: " << copyCat.getBrain() << std::endl;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
}

int main() {
	// test if Animal is instanciable
	//Animal test;
	const int size = 6;
	
	// but here the array of pointers type animal are not instance directly the abstract object 
	// here is the shared interface like the makeSound method and the derived classes are ok to
	// instance 
	// create an obj by the pointer type Animal redirects the methods by the obj called 
	// makeSound for the cat is Mi Mi
	// this is polymorphism
	Animal* animals[size];
	
    	std::cout << "\n--- ARRAY OF 6 ANIMALS ---\n\n";
	for (int i = 0; i < size; ++i) {
		if (i < size / 2) {
			animals[i] = new Dog();
        	} 
		else {
            		animals[i] = new Cat();
        	}
    	}
    	
	std::cout << "\n";
	
	for (int i = 0; i < size; ++i) {
		animals[i]->makeSound();
	}

    	std::cout << "\n";
	
	for (int i = 0; i < size; ++i) {
		delete animals[i];
		std::cout << "\n";
	}
	
    	std::cout << "\n";
    	std::cout << "\n";
    	std::cout << "--- COPIES ARE DEEP COPIES ---\n";
	testDeepCopy();
    
	return 0;
}

