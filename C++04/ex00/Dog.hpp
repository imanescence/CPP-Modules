/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:28:01 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/26 18:50:29 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
        public:
                Dog();
                Dog(const Dog& copy);
                Dog& operator=(const Dog& copy);
                ~Dog();
                
                void makeSound() const;
};  
