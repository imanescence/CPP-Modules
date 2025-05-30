/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/04 11:44:39 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(75) {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: Grade too high out of bounds !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error: Grade too low out of bounds!";
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade) {

	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	if (this != &copy)
		this->grade = copy.grade;	
	return *this;
}

Bureaucrat::~Bureaucrat () {}

std::string Bureaucrat::getName() {
	
	return name;
}

int Bureaucrat::getGrade() const {
	
	return grade;
}

void Bureaucrat::signForm(AForm& form) {
	
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) {
	
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}
