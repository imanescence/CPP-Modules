/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:33:39 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/16 14:52:19 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "generateAndIdentify.hpp"

int main() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Base *base = generate();
	identify(base);
	identify(*base);
	
	delete base;
	return 0;
}
