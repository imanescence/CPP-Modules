/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:40:39 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/17 14:30:02 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie test("Henry Cavill");
	test.announce();

	Zombie* testptr = newZombie("Pointeur");
	testptr->announce();
	delete testptr;

	randomChump("Pile");

	Zombie* coucouguyz = zombieHorde(3, "yoyo");
	delete[] coucouguyz;
	return (0);
}
