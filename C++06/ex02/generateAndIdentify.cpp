/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generateAndIdentify.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:05:22 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/16 14:37:33 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generateAndIdentify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	int randNum = rand() % 3;

	switch (randNum) {

		case 0:
			return new A;

		case 1:
			return new B;

		case 2:
			return new C;

		default:
			return NULL;
	}
}
void identify(Base *p) {
	if (p) {

		if (dynamic_cast<A*>(p)) 
			std::cout << "I'm a pointer to A" << std::endl;

		else if (dynamic_cast<B*>(p))
			std::cout << "I'm a pointer to B" << std::endl;
	 	
		else if (dynamic_cast<C*>(p))
			std::cout << "I'm a pointer to C" << std::endl;
	}

	else 
		p = NULL;
}

void identify(Base &p) {

		try { 
			A& a = dynamic_cast<A&>(p);
			(void)a;
			std::cout << "I'm a reference to A" << std::endl;
			return;
		} catch (const std::exception& e) {
			try { 
				B& b = dynamic_cast<B&>(p);
				(void)b;
				std::cout << "I'm a reference to B" << std::endl;
				return;
			} catch (const std::exception& e) {
				try { 
					C& c = dynamic_cast<C&>(p);
					(void)c;
					std::cout << "I'm a reference to C" << std::endl;
					return;
				} catch (const std::exception& e) {
					std::cout << "Cast failed or unknow type" << std::endl;
				}
			}
		}
}
