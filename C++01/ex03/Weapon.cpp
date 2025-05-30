/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:52:46 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/11 14:59:39 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {} // the constructor with type as argument

const std::string& Weapon::getType() const{ // getter returns the const reference of type 
	return (_type);
}

void Weapon::setType(const std::string& newType) { // setter which can set a new type as pass as argument to Weapon class 
	_type = newType;
}

Weapon::~Weapon() {}
