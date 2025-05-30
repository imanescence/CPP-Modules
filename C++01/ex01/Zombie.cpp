/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:15:35 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/17 14:30:23 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

// default constructor
Zombie::Zombie() : _name("Default Zombie") {
    // Tu peux initialiser _name avec une valeur par défaut comme "Default Zombie"
}

// name constructor (overload)
Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce() {
	std::cout <<  _name << " : BraiiiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout <<  _name << " kaput" << std::endl;
}

Zombie* newZombie(std::string name) {
	return new Zombie(name);
}

void randomChump(std::string name) {
	Zombie z(name);
	z.announce();
}

void Zombie::setName(std::string new_name) {
	this->_name = new_name;
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
		horde[i].announce();
	}

	return horde;
}
