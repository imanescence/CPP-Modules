/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 16:40:10 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy request form", 72, 45) {
	_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target) {
		std::cout << "Robotomy Request Form creation..." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {

            if (this != &copy) {
		    AForm::operator=(copy);
        }
            return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeAction(Bureaucrat const &executor) const {

	(void) executor;

	std::cout << "*Drilling noises* zip zip ziiip..." << std::endl;

	if (rand() % 2) {
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	} 

	else {
		std::cout << "Robotomy failed on " << getTarget() << "... :s" << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget()const {
        
	return _target;
}

