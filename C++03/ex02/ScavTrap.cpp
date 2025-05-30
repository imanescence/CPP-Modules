/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:44:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:38:28 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <climits>

ScavTrap::ScavTrap() : ClapTrap() {
	
	hitPoints = 100; 
	energyPoints = 50; 
	attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name) {
	
	hitPoints = 100;
        energyPoints = 50;
        attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name, int _hitPoints, int _energyPoints, int _attackDamage) : ClapTrap(_name, _hitPoints, _energyPoints, _attackDamage) {
	
	if (energyPoints > INT_MAX || hitPoints > INT_MAX || attackDamage > INT_MAX || energyPoints < 0 || hitPoints < 0 || attackDamage < 0) {
                hitPoints = 10;
                energyPoints = 10;
                attackDamage = 0;
        }
	
	std::cout << "ScavTrap custom constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ClapTrap& copy) : ClapTrap(copy) {
        
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
        
	std::cout << " ScavTrap copy assignement operator called" << std::endl;
        if (this != &copy) {
		name         = copy.name;
                hitPoints    = copy.hitPoints;
                energyPoints = copy.energyPoints;
                attackDamage = copy.attackDamage;
    }
        return *this;
}


void ScavTrap::attack(const std::string& target) {

	if (hitPoints == 0 || energyPoints == 0)
		std::cout << "ScavTrap " << name << "cannot attack anymore, battle is finished" << std::endl;

	else {
		std::cout << "ScavTrap " << name << " attacks ->" << target
			<< " causing " << attackDamage << " points of damage ! And a lot for his culpability" << std::endl;

		energyPoints--;
	}
}


void ScavTrap::takeDamage(unsigned int amount) {

	if (hitPoints == 0)
		std::cout << "Are you tryin to attack a poor sick guy ?" << std::endl;
	else {
		std::cout << "ScavTrap " << name << " takes " << amount
			<< " points of damage ! And says aieaieaie" << std::endl;
		hitPoints -= amount;
	}
}


void ScavTrap::beRepaired(unsigned int amount) {

	if (energyPoints == 0)
		std::cout << "ScavTrap " << name << " too low battery mode..." << std::endl;
	if (hitPoints == 0)
		std::cout << "No resurrection here pls !" << std::endl;
	else
	{
		if (energyPoints == 1)
			std::cout << "Just beware, ScavTrap " << name << " you can be repaired but no more energy to live after :(..." << std::endl;
		std::cout << "Repairing..." << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
}


int ScavTrap::getHitPoints() {
	return (hitPoints);
}


int ScavTrap::getEnergyPoints() {
	return (energyPoints);
}


void ScavTrap::guardGate() {
	std::cout << "Hi i'm ScavTrap and this is my special capacity !" << std::endl;
}


ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}
