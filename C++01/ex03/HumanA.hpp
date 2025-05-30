/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:20:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/11 16:02:39 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon& _weapon; // reference to the class weapon
	
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
};
