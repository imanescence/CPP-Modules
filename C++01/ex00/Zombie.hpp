/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:16:57 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/01/27 17:33:22 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {
	public:
		 Zombie();  // constructor
		 Zombie(std::string name);  // overload constructor
		~Zombie();  // destructor

	void announce(void);
	
	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

