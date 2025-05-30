/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:13:31 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 15:47:19 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	protected :
		std::string type;

	public :
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);		
		virtual ~Animal();

		virtual void makeSound() const = 0; // set the class as abstract
		std::string getType() 	 const;
};
