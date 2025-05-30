/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:44:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:43:06 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <climits>

ClapTrap::ClapTrap() : name("Bill"), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& copy) : hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
        
	std::cout << "ClapTrap copy constructor called" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
        
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &copy) {
		name	     = copy.name;
        	hitPoints    = copy.hitPoints;
        	energyPoints = copy.energyPoints;
        	attackDamage = copy.attackDamage;
    	}
	    return *this;
}


ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "ClapTrap name constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage) : name(_name), hitPoints(_hitPoints), energyPoints(_energyPoints), attackDamage(_attackDamage) {
	
	if (energyPoints > INT_MAX || hitPoints > INT_MAX || attackDamage > INT_MAX || energyPoints < 0 || hitPoints < 0 || attackDamage < 0) {
		hitPoints = 10;
		energyPoints = 10;
		attackDamage = 0;
	}	
	
	std::cout << "ClapTrap custom values constructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target) {
	
	if (hitPoints == 0 || energyPoints == 0)
		std::cout << "ClapTrap " << name << " cannot attack anymore..." << std::endl;
	
	else {
		std::cout << "ClapTrap " << name << " attacks " << target
			<< " causing " << attackDamage << " points of damage !" << std::endl;
		
		energyPoints--;
	}
}


void ClapTrap::takeDamage(unsigned int amount) {

	if (hitPoints == 0)
		std::cout << "Are you tryin to attack a dead guy ?" << std::endl;
	else {
		std::cout << "ClapTrap " << name << " takes " << amount
			<< " points of damage ! And says ouch" << std::endl;
		hitPoints -= amount;
	}
}


void ClapTrap::beRepaired(unsigned int amount) {
	
	if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " cannot be repaired, no more energy..." << std::endl;
	if (hitPoints == 0)
		std::cout << "No resurrection here pls !" << std::endl;	
	else
	{
		if (energyPoints == 1)
			std::cout << "Just beware, ClapTrap " << name << " can be repaired but no more energy to do something else than receive damage after..." << std::endl;
		std::cout << "Revitalizing..." << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
}


int ClapTrap::getHitPoints() {
	return (hitPoints);
}


int ClapTrap::getEnergyPoints() {
	return (energyPoints);
}


ClapTrap::~ClapTrap() {
	
	std::cout << "ClapTrap destructor called" << std::endl;
}
