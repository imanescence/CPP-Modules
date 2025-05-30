/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 17:04:51 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrubbery Creation Form", 145, 137) {
	_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {
	std::cout << "Shrubbery Creation Form in progress..." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
            
	if (this != &copy) {
		AForm::operator=(copy);
        }
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction(Bureaucrat const &executor) const {
	(void)executor;
	std::ofstream outFile((_target + "_shrubbery").c_str());
	
	if (outFile.fail()) {
        	throw std::runtime_error("Could not create file.");
	}
	if (outFile.is_open()) {
		        const char* tree[] = {
            "                     .o00o",
            "                   o000000oo",
            "                  00000000000o",
            "                 00000000000000",
            "              oooooo  00000000  o88o",
            "           ooOOOOOOOoo  ```''  888888",
            "         OOOOOOOOOOOO'.qQQQQq. `8888'",
            "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'",
            "        OOOOOOOOOO'.QQQQQQQQQQ/ /q",
            "         OOOOOOOOO QQQQQQQQQQ/ /QQ",
            "           OOOOOOOOO `QQQQQQ/ /QQ'",
            "             OO:F_P:O `QQQ/  /Q'",
            "                \\. \\ |  // |",
            "                d\\ \\\\|_////",
            "                qP| \\\\ _' `|Ob",
            "                   \\  / \\  \\Op",
            "                   |  | O| |",
            "           _       \\/. \\_/ /\\",
            "            `---__/|_\\\\   //|  __",
            "                  `-'  `-'`-'-"
        };

        for (long unsigned int i = 0; i < sizeof(tree) / sizeof(tree[0]); ++i) {
            outFile << tree[i] << std::endl;
        }
        outFile.close();
	}
}

std::string ShrubberyCreationForm::getTarget()const {
        
	return _target;
}
