/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 14:15:24 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;

        public:
                ShrubberyCreationForm();
                ShrubberyCreationForm(std::string target);
                ShrubberyCreationForm(ShrubberyCreationForm const &copy);
                ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
                ~ShrubberyCreationForm();

		std::string getTarget() const;
		void executeAction(Bureaucrat const &executor) const;
};

