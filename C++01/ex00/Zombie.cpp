/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:15:35 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/17 14:31:24 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce() {
	std::cout << _name << " : BraiiiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " kaput" << std::endl;
}
