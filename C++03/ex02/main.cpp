/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:46:10 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:40:37 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)	{
	
	// Object creation with default constructor
	std::cout << "OBJECT CREATION WITH DEFAULT CONSTRUCTOR" << std::endl;
	FragTrap hey;
        
	std::cout << "--- Before actions: ---" << std::endl;
        std::cout << "Hit points: " << hey.getHitPoints() << std::endl;
        std::cout << "Energy points: " << hey.getEnergyPoints() << std::endl;

        hey.attack("Average Victim");
        hey.takeDamage(2);

        std::cout << "--- After taking damage: ---" << std::endl;
        std::cout << "Hit points: " << hey.getHitPoints() << std::endl;
        std::cout << "Energy points: " << hey.getEnergyPoints() << std::endl;

        hey.beRepaired(4);

        std::cout << "--- After repairing: ---" << std::endl;
        std::cout << "Hit points: " << hey.getHitPoints() << std::endl;
        std::cout << "Energy points: " << hey.getEnergyPoints() << std::endl;

	std::cout << "\n";
	std::cout << "\n";
	hey.highFivesGuys();
        std::cout << "\n";
        std::cout << "\n";

	// Object creation with name constructor
	std::cout << "OBJECT CREATION WITH NAME CONSTRUCTOR" << std::endl;
	FragTrap Named("Rogue15452");

        std::cout << "--- Before actions: ---" << std::endl;
        std::cout << "Hit points: " << Named.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Named.getEnergyPoints() << std::endl;

        Named.attack("Luke Skywalker");
        Named.takeDamage(4);

        std::cout << "--- After taking damage: ---" << std::endl;
        std::cout << "Hit points: " << Named.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Named.getEnergyPoints() << std::endl;

        Named.beRepaired(2);

        std::cout << "--- After repairing: ---" << std::endl;
        std::cout << "Hit points: " << Named.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Named.getEnergyPoints() << std::endl;

	std::cout << "\n";
	std::cout << "\n";
	Named.highFivesGuys();
	std::cout << "\n";
	std::cout << "\n";

	// Object creation with a fullcustom constructor
        std::cout << "OBJECT CREATION WITH ALL VAR CUSTOM CONSTRUCTOR" << std::endl;
        FragTrap allCustom("Stylish", 14, 5, 8);

        std::cout << "--- Before actions: ---" << std::endl;
        std::cout << "Hit points: " << allCustom.getHitPoints() << std::endl;
        std::cout << "Energy points: " << allCustom.getEnergyPoints() << std::endl;

        allCustom.attack("Fashion Victim");
        allCustom.takeDamage(3);

        std::cout << "--- After taking damage: ---" << std::endl;
        std::cout << "Hit points: " << allCustom.getHitPoints() << std::endl;
        std::cout << "Energy points: " << allCustom.getEnergyPoints() << std::endl;

        allCustom.beRepaired(5);

        std::cout << "--- After repairing: ---" << std::endl;
        std::cout << "Hit points: " << allCustom.getHitPoints() << std::endl;
        std::cout << "Energy points: " << allCustom.getEnergyPoints() << std::endl;

	std::cout << "\n";
	std::cout << "\n";
	allCustom.highFivesGuys();
	std::cout << "\n";
	std::cout << "\n";

	// Object creation with name constructor with error values
        std::cout << "OBJECT CREATION WITH ALL VAR CUSTOM CONSTRUCTOR" << std::endl;
        FragTrap Error("More errors", 0, 0, 2);

        std::cout << "--- Before actions: ---" << std::endl;
        std::cout << "Hit points: " << Error.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Error.getEnergyPoints() << std::endl;

        Error.attack("More victims");
        Error.takeDamage(3);

        std::cout << "--- After taking damage: ---" << std::endl;
        std::cout << "Hit points: " << Error.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Error.getEnergyPoints() << std::endl;

        Error.beRepaired(5);

        std::cout << "--- After repairing: ---" << std::endl;
        std::cout << "Hit points: " << Error.getHitPoints() << std::endl;
        std::cout << "Energy points: " << Error.getEnergyPoints() << std::endl;

	std::cout << "\n";
	std::cout << "\n";
	Error.highFivesGuys();
        std::cout << "\n";
        std::cout << "\n";

    return 0;
}
