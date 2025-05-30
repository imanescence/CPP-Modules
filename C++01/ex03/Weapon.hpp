/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:00:09 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/11 15:00:38 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(const std::string& type);
		const std::string& getType() const; // member function thats returns a const ref to type
		void setType(const std::string& newType); // member function that sets type using the new one passed as parameter
		~Weapon();
};
