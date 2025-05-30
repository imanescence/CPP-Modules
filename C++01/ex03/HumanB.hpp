/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:48:12 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/11 16:33:22 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {

	private:
		std::string _name;
		Weapon* _weapon; // pointer to the Weapon class, can be NULL

	public:
		HumanB(std::string name);
		void attack() const;
		void setWeapon(Weapon& weapon);
};
