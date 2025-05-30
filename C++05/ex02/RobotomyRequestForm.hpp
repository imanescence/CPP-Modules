/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 14:15:33 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;

        public:
                RobotomyRequestForm();
                RobotomyRequestForm(std::string target);
                RobotomyRequestForm(RobotomyRequestForm const &copy);
                RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
                ~RobotomyRequestForm();
		
		std::string getTarget() const;

		void executeAction(Bureaucrat const &executor) const;
};

