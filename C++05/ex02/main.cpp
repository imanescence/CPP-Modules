#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
	Bureaucrat Pascal("Pascal", 150);
        Bureaucrat Mireille("Mireille", 146);
        Bureaucrat Clemence("Clemence", 110);
        Bureaucrat Theo("Theo", 60);
        Bureaucrat Eloise("Eloise", 38);
        Bureaucrat Maxime("Maxime", 20);
        Bureaucrat Camille("Camille", 3);
       
	std::cout << "\n";
	std::cout << "-------- CREATION OF 7 BUREAUCRATS AND THE 3 FORMS --------" << std::endl;
	std::cout << "\n";

	ShrubberyCreationForm shrubberyForm("LivingRoom");
        RobotomyRequestForm robot("Nono");
        PresidentialPardonForm pardon("The guy overthere");

	std::cout << "\n";
	std::cout << Pascal << std::endl;
	std::cout << Mireille << std::endl;
	std::cout << Clemence << std::endl;
	std::cout << Theo << std::endl;
	std::cout << Eloise << std::endl;
	std::cout << Maxime << std::endl;
	std::cout << Camille << std::endl;
         
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "------------ ᝰ✍ SIGNATURES'S ATTEMPTS FOR SHRUBBERY 🌳------------" << std::endl;
	std::cout << "\n";
        
	Pascal.signForm(shrubberyForm); 
        Mireille.signForm(shrubberyForm); 
        Clemence.signForm(shrubberyForm); 
        Theo.signForm(shrubberyForm); 
        Eloise.signForm(shrubberyForm); 
        Maxime.signForm(shrubberyForm); 
        Camille.signForm(shrubberyForm); 
        
	std::cout << "\n";
	std::cout << "------------ 🚀 EXECUTION'S ATTEMPTS FOR SHRUBBERY 🌳------------" << std::endl;
	std::cout << "\n";
        
	Pascal.executeForm(shrubberyForm); 
        Mireille.executeForm(shrubberyForm); 
        Clemence.executeForm(shrubberyForm); 
        Theo.executeForm(shrubberyForm); 
        Eloise.executeForm(shrubberyForm); 
        Maxime.executeForm(shrubberyForm); 
        Camille.executeForm(shrubberyForm);
	
	std::cout << "\n";
	std::cout << "------------ ᝰ✍ SIGNATURES'S ATTEMPTS FOR ROBOTOMY 🤖🛠️ ------------" << std::endl;
	std::cout << "\n";
        
	Pascal.signForm(robot); 
        Mireille.signForm(robot); 
        Clemence.signForm(robot); 
        Theo.signForm(robot); 
        Eloise.signForm(robot); 
        Maxime.signForm(robot); 
        Camille.signForm(robot); 
        
	std::cout << "\n";
	std::cout << "------------ 🚀 EXECUTION'S ATTEMPTS FOR ROBOTOMY 🤖🛠️ ------------" << std::endl;
	std::cout << "\n";
        
	Pascal.executeForm(robot); 
        Mireille.executeForm(robot); 
        Clemence.executeForm(robot); 
        Theo.executeForm(robot); 
        Eloise.executeForm(robot); 
        Maxime.executeForm(robot); 
        Camille.executeForm(robot);

	std::cout << "\n";
	std::cout << "------------ ᝰ✍ SIGNATURES'S ATTEMPTS FOR PRESIDENTIAL PARDON 🕊️🙏------------" << std::endl;
	std::cout << "\n";
        
	Pascal.signForm(pardon); 
        Mireille.signForm(pardon); 
        Clemence.signForm(pardon); 
        Theo.signForm(pardon); 
        Eloise.signForm(pardon); 
        Maxime.signForm(pardon); 
        Camille.signForm(pardon); 
        
	std::cout << "\n";
	std::cout << "------------ 🚀 EXECUTION'S ATTEMPTS FOR PRESIDENTIAL PARDON 🕊️🙏------------" << std::endl;
	std::cout << "\n";
        
	Pascal.executeForm(pardon); 
        Mireille.executeForm(pardon); 
        Clemence.executeForm(pardon); 
        Theo.executeForm(pardon); 
        Eloise.executeForm(pardon); 
        Maxime.executeForm(pardon); 
        Camille.executeForm(pardon);
        
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
