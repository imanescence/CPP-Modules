/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 14:19:24 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;

        public:
                PresidentialPardonForm();
                PresidentialPardonForm(std::string target);
                PresidentialPardonForm(PresidentialPardonForm const &copy);
                PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
                ~PresidentialPardonForm();
		
		std::string getTarget() const;
		
		void executeAction(Bureaucrat const &executor) const;
};

