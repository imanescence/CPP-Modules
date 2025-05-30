/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/28 16:32:45 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
        private:
                const std::string name;
                int grade;

        public:
                Bureaucrat();
                Bureaucrat(std::string _name, int _grade);
                Bureaucrat(const Bureaucrat& copy);
                Bureaucrat& operator=(const Bureaucrat& copy);
                ~Bureaucrat();

                std::string getName();
                int getGrade() const;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		void signForm(AForm& form);
		void executeForm(AForm const &form);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& b);

