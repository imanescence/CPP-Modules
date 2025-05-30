/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:50:05 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/12 14:37:03 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const name;
		int const gradeSign;
		int const gradeExec;
		bool dulySigned;

	public:
		Form();
		Form(std::string _name, int _gradeSign, int _gradeExec);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form();

		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool isDulySigned() const;

		void beSigned(const Bureaucrat& b);

                class GradeTooHighException : public std::exception {
                        public:
                                const char* what() const throw();
                };
                class GradeTooLowException : public std::exception {
                        public:
                                const char* what() const throw();
                };
};

std::ostream& operator<<(std::ostream& out, Form& f);
