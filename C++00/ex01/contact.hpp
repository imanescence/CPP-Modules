/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <aitouflih.iman@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:51:29 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/01/17 13:10:35 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

// Here is the principle of ENCAPSULATION : a fundamental principle of object-oriented programming, 
// where the attributes (variables) of a class are often declared as private or protected to protect
// the integrity of the data and prevent direct access from outside the class.

class Contact {
private:
	std::string	_lastName;
	std::string	_firstName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	// Constructors : Constructors (just below) in object-oriented programming, particularly in C++, are 
	// special functions that are automatically called when you create (or instantiate) an 
	// object of a class. Their primary role is to initialize the object and assign it an initial state.
	// They are therefore indispensable for controlling the initialization of objects in a class and 
	// ensuring that they start in a consistent and usable state.
	
	Contact() : _lastName(), _firstName(), _nickName(), _phoneNumber(), _darkestSecret() {}

	Contact(std::string lName, std::string fName, std::string nName, std::string pNum, std::string dSecret) : 
		_lastName(lName),
		_firstName(fName),
		_nickName(nName),
		_phoneNumber(pNum),
		_darkestSecret(dSecret) {}

	// Setters : Setters are public methods that allow controlled modification of private attributes in a class, 
	// ensuring encapsulation and protecting data integrity. They enable validation, logic enforcement, and make 
	// it easier to evolve the internal implementation without affecting external code.
	
	void setLastName      (const std::string& lName  ) { _lastName      = lName;   }
	void setFirstName     (const std::string& fName  ) { _firstName     = fName;   }
	void setNickName      (const std::string& nName  ) { _nickName      = nName;   }
	void setPhoneNumber   (const std::string& pNum   ) { _phoneNumber   = pNum;    }
	void setDarkestSecret (const std::string& dSecret) { _darkestSecret = dSecret; }

	// A getter or accessor method (just below) is a public method that allows controlled reading of a private 
	// attribute's value without directly exposing the attribute to the outside of the class. It 
	// maintains and respects the encapsulation principle.
	
	std::string getLastName() 		const { return _lastName; 		}
	std::string getFirstName() 		const { return _firstName; 		}
	std::string getNickName() 		const { return _nickName; 		}
	std::string getPhoneNumber()	const { return _phoneNumber; 	}
	std::string getDarkestSecret()	const { return _darkestSecret;	}

};

#endif
