/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:00:12 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/28 10:30:22 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {
	    std::cout<< "\n";
	    std::cout<< "\n";
	    Bureaucrat b1("Mr Jean Mi HR director", 1);
	    Bureaucrat b2("Steffi the IT girl", 50);
	    Bureaucrat b3("Corinne from the compta", 60);
	    Bureaucrat b4("Bruno sales and union leader", 149);
	    std::cout << b1 << std::endl;
            std::cout << b2 << std::endl;
            std::cout << b3 << std::endl;
            std::cout << b4 << std::endl;
	    std::cout<< "\n";
	    std::cout<< "\n";
	    std::cout << "------- Calling increment grade method for all the bureaucrats -------" << std::endl;
	    std::cout<< "\n";
	    std::cout<< "\n";
            std::cout << b1 << " gonna catch an exception after the incrementation" << std::endl;
	    b2.incrementGrade();
            std::cout << b2 << std::endl;
	    b3.incrementGrade();
            std::cout << b3 << std::endl;
	    b4.incrementGrade();
            std::cout << b4 << std::endl;
	    b1.incrementGrade();
            std::cout << b1 << std::endl;
	    std::cout << "------- Calling decrement grade method for all the bureaucrats -------" << std::endl;
	    b1.decrementGrade();
	    b2.decrementGrade();
	    b3.decrementGrade();
	    b4.decrementGrade();
            std::cout << b1 << std::endl;
            std::cout << b2 << std::endl;
            std::cout << b3 << std::endl;
            std::cout << b4 << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception catched -> " << e.what() << std::endl;
    }

    try {
	    std::cout<< "\n";
	    std::cout<< "\n";
	    std::cout<< "************** SECOND TEST *************" << std::endl;
	    std::cout<< "\n";
	    std::cout<< "\n";
	    Bureaucrat b1("Mr Jean Mi HR director", 1);
            Bureaucrat b2("Steffi the IT girl", 50);
            Bureaucrat b3("Corinne from the compta", 60);
            Bureaucrat b4("Bruno sales and union leader", 150);
	    std::cout << b1 << std::endl;
            std::cout << b2 << std::endl;
            std::cout << b3 << std::endl;
            std::cout << b4 << std::endl;
	    std::cout<< "\n";
	    std::cout<< "\n";
            std::cout << "------- Calling decrement grade method for all the bureaucrats -------" << std::endl;
            std::cout<< "\n";
	    std::cout<< "\n";
            std::cout << b4 << " gonna catch an exception after the decrementation" << std::endl;
	    b1.decrementGrade();
            std::cout << b1 << std::endl;
            b2.decrementGrade();
            std::cout << b2 << std::endl;
            b3.decrementGrade();
            std::cout << b3 << std::endl;
            b4.decrementGrade();
            std::cout << b4 << std::endl;
    }
    
    catch (const std::exception &e) {
        std::cerr << "Exception catched -> " << e.what() << std::endl;
    }

    return 0;
}
