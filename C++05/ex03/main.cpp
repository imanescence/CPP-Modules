/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:00:12 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 17:04:04 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
	Intern someRandomIntern;
	AForm* robot;
	robot = someRandomIntern.makeForm("Robotomy Request", "Bender");

	if (robot) {
		    try {
		Bureaucrat Pascal("Pascal", 150);
        	Bureaucrat Mireille("Mireille", 146);
        	Bureaucrat Clemence("Clemence", 110);
        	Bureaucrat Theo("Theo", 60);
       	 	Bureaucrat Eloise("Eloise", 38);
        	Bureaucrat Maxime("Maxime", 20);
        	Bureaucrat Camille("Camille", 3);

		std::cout << "\n";
		std::cout << "-------- CREATION OF 7 BUREAUCRATS AND THE 3 FORMS --------" << std::endl;
		std::cout << "\n";

		std::cout << "\n";
		std::cout << "------------ ᝰ✍ SIGNATURES'S ATTEMPTS FOR ROBOTOMY 🤖🛠️ ------------" << std::endl;
		std::cout << "\n";

		Pascal.signForm(*robot);
        	Mireille.signForm(*robot);
        	Clemence.signForm(*robot);
        	Theo.signForm(*robot);
        	Eloise.signForm(*robot);
        	Maxime.signForm(*robot);
        	Camille.signForm(*robot);

		std::cout << "\n";
		std::cout << "------------ 🚀 EXECUTION'S ATTEMPTS FOR ROBOTOMY 🤖🛠️ ------------" << std::endl;
		std::cout << "\n";

		Pascal.executeForm(*robot);
        	Mireille.executeForm(*robot);
        	Clemence.executeForm(*robot);
        	Theo.executeForm(*robot);
        	Eloise.executeForm(*robot);
        	Maxime.executeForm(*robot);
        	Camille.executeForm(*robot);
	       
		} catch (std::exception &e) {
        		std::cout << "Exception: " << e.what() << std::endl;
		}
	delete robot;
	}

	std::cout << "\n";
	std::cout << "\n";
	AForm *pardon;
	pardon = someRandomIntern.makeForm("Presidential Pardon", "The guy");

	if (pardon)
		delete pardon;

	std::cout << "\n";
	AForm *tree;
	tree = someRandomIntern.makeForm("Shrubbery Creation", "Justhere");

	if (tree)
		delete tree;
	
	std::cout << "\n";
	AForm *bullshit;
	bullshit = someRandomIntern.makeForm("Blablabla", "Blablbla");
	
    return 0;
}
