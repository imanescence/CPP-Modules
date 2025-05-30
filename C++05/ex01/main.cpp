/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:00:12 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/28 11:10:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
	
	std::cout << "Two bureaucrats created 👇" << std::endl;
        Bureaucrat b1("Bill", 3);
        Bureaucrat b2("Bob", 51);
        std::cout << b1 << "will sign the first form" << std::endl;
        std::cout << b2 << "will sing the second form" << std::endl;
	
	std::cout << "\n";

	std::cout << "Two forms created 👇" << std::endl;
        Form f1("C451.B5.a/f21", 10, 5);
        Form f2("F584.A32.c-14", 50, 40);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

	std::cout << "\n";
	
	std::cout << "Signatures in progress ✍️" << std::endl;
        b1.signForm(f1);
        b2.signForm(f2);

	std::cout << "\n";

	std::cout << "Forms check 📄✅" <<std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
