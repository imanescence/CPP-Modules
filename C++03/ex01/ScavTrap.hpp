/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:31:27 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:11:40 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

	// default constructor
	ScavTrap();
	
	// name constructor
	ScavTrap(std::string _name);
	
	// custom constructor
	ScavTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage);
	
	// copy constructor
	ScavTrap(const ScavTrap& copy);
	ScavTrap(const ClapTrap& copy);

	// assignation operator
	ScavTrap& operator=(const ScavTrap& copy);

	// member functions
	void guardGate();
	void attack     (const std::string& target);
	
	// getters
	int getEnergyPoints();
	int getHitPoints();

	// destructor
	~ScavTrap();
};
