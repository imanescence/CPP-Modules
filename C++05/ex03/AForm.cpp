/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 13:58:02 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), gradeSign(2), gradeExec(3), dulySigned(false) {}

AForm::AForm(const std::string _name, const int _gradeSign, const int _gradeExec) : name(_name), gradeSign(_gradeSign), gradeExec(_gradeExec) {
	dulySigned = false;
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
	
}

AForm::AForm(const AForm& copy) : name(copy.name), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec), dulySigned(copy.dulySigned) {}

AForm& AForm::operator=(const AForm& copy) {

            if (this != &copy) {
		    this->dulySigned = copy.dulySigned;
        }
            return *this;
}

AForm::~AForm () {}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Error: Grade too high out of bounds !";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Error: Grade too low out of bounds!";
}

std::string AForm::getName() const {
	
	return name;
}

int AForm::getGradeSign() const {
	
	return gradeSign;
}

int AForm::getGradeExec() const {
	
	return gradeExec;
}

bool AForm::isDulySigned() const {
	
	return dulySigned;
}

void AForm::beSigned(const Bureaucrat& b) {
	
	if (b.getGrade() > gradeSign)
		throw TooLowException();
	dulySigned = true;
}

void AForm::execute(Bureaucrat const &executor) const {
	if (!dulySigned) {
		throw NotSignedException();
	}
	if (executor.getGrade() > gradeExec) {
		throw TooLowException();
	}

	executeAction(executor);
}

const char* AForm::NotSignedException::what() const throw () {
	
	return "the form is not signed.";
}

const char* AForm::TooLowException::what() const throw () {
	
	return "the grade is too low.";
}

std::ostream& operator<<(std::ostream& out, AForm& f) {
	
	out << "AForm :" << f.getName() << " which require grade " << f.getGradeSign() << " to sign it and grade " << f.getGradeExec() << " to execute it is " << (f.isDulySigned() ? "signed" : "not signed");
    
	return out;
}
