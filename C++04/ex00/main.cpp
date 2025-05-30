/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 16:01:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();

    std::cout << "\n";
    
    std::cout << "Type of animal " << j->getType() << " " << std::endl;
    std::cout << "Type of animal " << i->getType() << " " << std::endl;

    std::cout << "\n";
    
    std::cout << "And the Cat says ";
    i->makeSound(); // will output the cat sound!
    std::cout << "And the Dog says ";
    j->makeSound(); // will output the dog sound!
    meta->makeSound(); // will output the generic animal sound!

    std::cout << "\n";
    
    // Test with WrongAnimal and WrongCat
    std::cout << "Tests with WrongAnimal and WrongCat\n" << std::endl;
	
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat  = new WrongCat();

    std::cout << "\n";
    
    std::cout << "WrongCat type : " << wrongCat->getType() << std::endl;
    wrongCat->makeSound(); // will output the "WrongAnimal sound!"
    wrongMeta->makeSound(); // will output the "WrongAnimal sound!"

    std::cout << "\n";
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;

    return 0;
}
