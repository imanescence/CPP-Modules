/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:14:54 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/26 18:50:38 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& copy);
                Cat& operator=(const Cat& copy);
		~Cat();

		void makeSound() const;
};
