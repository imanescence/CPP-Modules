/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:50:05 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/28 16:22:12 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		std::string const name;
		int const gradeSign;
		int const gradeExec;
		bool dulySigned;

	public:
		AForm();
		AForm(std::string _name, int _gradeSign, int _gradeExec);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		~AForm();

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

		class NotSignedException : public std::exception {
			public :
				const char* what() const throw();
		};
		
		class TooLowException : public std::exception {
			public :
				const char* what() const throw();
		};

		virtual void executeAction(Bureaucrat const &executor) const = 0;
		void execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream& out, AForm& f);
