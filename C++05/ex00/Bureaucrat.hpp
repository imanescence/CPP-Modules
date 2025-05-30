/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:00 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/11 18:33:35 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <stdexcept>

class Bureaucrat {
        private:
                const std::string name;
                int grade;

        public:
		// constructors and destructor
                Bureaucrat();
                Bureaucrat(std::string _name, int _grade);
                Bureaucrat(const Bureaucrat& copy);
                Bureaucrat& operator=(const Bureaucrat& copy);
                ~Bureaucrat();

		// getters
                std::string getName() const;
                int getGrade();

		// exceptions classes
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		// in & de crementation of grade
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& b);

