/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:23 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/12 12:02:45 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(75) {
        
	//std::cout << "Bureaucrat default constructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: Grade too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error: Grade too low !";
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	
	//std::cout << "Bureaucrat custom constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {

        //std::cout << "Bureaucrat: copy constructor called" << std::endl;
}
//     
//
//?? ATTNETION LE NOM EST EN COOONSTTTTTTT
//
//     EST CE QUE JAPPELLE BIEN LE COPY CONST ET LOPERATOR DASSIGNATION OU PAAAAAAS 
//
//
//
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {

        //std::cout << "Bureaucrat copy assignement operator called" << std::endl;
            if (this != &copy) {
		    grade = copy.grade;
        }
            return *this;
}

Bureaucrat::~Bureaucrat () {
        //std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() {
	return grade;
}

void Bureaucrat::incrementGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

