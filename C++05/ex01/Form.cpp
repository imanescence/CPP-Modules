/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/28 11:31:15 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), gradeSign(2), gradeExec(3), dulySigned(false) {}

const char* Form::GradeTooHighException::what() const throw() {

	return "grade is too high !";
}

const char* Form::GradeTooLowException::what() const throw() {

	return "grade is too low !";
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExec) : name(_name), gradeSign(_gradeSign), gradeExec(_gradeExec) {

	dulySigned = false;
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.name), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec), dulySigned(copy.dulySigned) {}

Form& Form::operator=(const Form& copy) {

            if (this != &copy) {
		    this->dulySigned = copy.dulySigned;
        }
            return *this;
}

std::string Form::getName() const {

	return name;
}

int Form::getGradeSign() const {

	return gradeSign;
}

int Form::getGradeExec() const {

	return gradeExec;
}

bool Form::isDulySigned() const {

	return dulySigned;
}

void Form::beSigned(const Bureaucrat& b) {

	if (b.getGrade() > gradeSign)
		throw GradeTooLowException();
	dulySigned = true;
}

Form::~Form () {}

std::ostream& operator<<(std::ostream& out, Form& f) {
	out << "Form " << f.getName() << " which require grade " << f.getGradeSign() << " to sign it and grade " << f.getGradeExec() << " to execute it is : " << (f.isDulySigned() ? "signed ✅" : "not signed ❌");
    
	return out;
}
