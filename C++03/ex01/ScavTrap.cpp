/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:44:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:35:11 by iait-ouf         ###   ########.fr       */
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
                hitPoints = 100;
                energyPoints = 50;
                attackDamage = 20;
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
		std::cout << "ScavTrap " << name << " attacks -> " << target
			<< " causing " << attackDamage << " points of damage ! And a lot for his culpability" << std::endl;

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
