/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:14:54 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 12:00:54 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _Brain;
	public:
		Cat();
		Cat(const Cat& copy);
                Cat& operator=(const Cat& copy);
		~Cat();

		void makeSound() const;
		void getBrainIdeas();
		Brain* getBrain();
};
