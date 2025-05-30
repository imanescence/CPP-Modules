/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:31:27 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:20:51 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

	// default constructor
	FragTrap();
	
	// name constructor
	FragTrap(std::string _name);
	
	// custom constructor
	FragTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage);
	
	// copy constructor
	FragTrap(const FragTrap& copy);
	FragTrap(const ClapTrap& copy);

	// assignation operator
	FragTrap& operator=(const FragTrap& copy);

	// member functions
	void highFivesGuys();
	void attack     (const std::string& target);
	
	// getters
	int getEnergyPoints();
	int getHitPoints();

	// destructor
	~FragTrap();
};
