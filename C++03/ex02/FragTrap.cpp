/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:44:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:23:04 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <climits>


FragTrap::FragTrap() : ClapTrap() {
	
	hitPoints = 100; 
	energyPoints = 100; 
	attackDamage = 30;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string _name) : ClapTrap(_name) {
	
	hitPoints = 100;
        energyPoints = 100;
        attackDamage = 30;
	
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string _name, int _hitPoints, int _energyPoints, int _attackDamage) : ClapTrap(_name, _hitPoints, _energyPoints, _attackDamage) {
	
	if (energyPoints > INT_MAX || hitPoints > INT_MAX || attackDamage > INT_MAX || energyPoints < 0 || hitPoints < 0 || attackDamage < 0) {
              hitPoints = 100;
              energyPoints = 100;
              attackDamage = 30;
        }
	
	std::cout << "FragTrap custom constructor called" << std::endl;
}


FragTrap::FragTrap(const ClapTrap& copy) : ClapTrap(copy) {
        
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
        
	std::cout << " FragTrap copy assignement operator called" << std::endl;
          
      	if (this != &copy) {
		name         = copy.name;
                hitPoints    = copy.hitPoints;
                energyPoints = copy.energyPoints;
                attackDamage = copy.attackDamage;
    }
        return *this;
}


void FragTrap::attack(const std::string& target) {

	if (hitPoints == 0 || energyPoints == 0)
		std::cout << "FragTrap " << name << " battle is finished no more energy or HP to fight" << std::endl;

	else {
		std::cout << "FragTrap " << name << " attacks the targer ->" << target
			<< " causing " << attackDamage << " points of damage ! :/" << std::endl;

		energyPoints--;
	}
}


int FragTrap::getHitPoints() {
	
	return (hitPoints);
}


int FragTrap::getEnergyPoints() {
	
	return (energyPoints);
}


void FragTrap::highFivesGuys() {

	std::cout << "Hi i'm FragTrap and this is my special capacity !" << std::endl;
}


FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
}
