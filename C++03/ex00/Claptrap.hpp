/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:31:27 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/26 13:07:44 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {
	private:

	std::string 	name;
	int		hitPoints;
	int		energyPoints;
	int		attackDamage;

	public:

	// default constructor
	ClapTrap();
	
	// name constructor
	ClapTrap(const std::string _name);

	// custom initalizations constructor
	ClapTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage);
	
	// copy constructor
	ClapTrap(const ClapTrap& copy);

	// assignation operator
	ClapTrap& operator=(const ClapTrap& copy);

	// members functions
	// -> actions
	void attack     (const std::string& target);
	void takeDamage (unsigned int amount);
	void beRepaired (unsigned int amount);

	// -> getters
	int getHitPoints()    ;
    	int getEnergyPoints() ;
	
	// destructor
	~ClapTrap();
};
