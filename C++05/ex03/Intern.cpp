/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:00:32 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 16:35:41 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    AForm* form = NULL;

    std::string forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

    int i = 0;
    while (i < 3) {
	    if (formName == forms[i])
		    break;
	    i++;
    }

    switch (i) {
        
	case 0:
            form = new ShrubberyCreationForm(target);
            break;
        
	case 1:
            form = new RobotomyRequestForm(target);
            break;
        
	case 2:
            form = new PresidentialPardonForm(target);
            break;
        
	default:
            std::cerr << "Error: Form " << formName << " does not exist." << std::endl;
            return NULL;
    }

    std::cout << "Intern creates " << formName << std::endl;
    return form;
}



Intern::~Intern() {}
