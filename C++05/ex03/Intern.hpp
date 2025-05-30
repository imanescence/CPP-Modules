/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:55:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/03/26 14:56:16 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

enum FormType {
	SHRUBBERY_CREATION,
	ROBOTOMY_REQUEST,
	PRESIDENTIAL_PARDON,
	FORM_NOT_FOUND
};

class Intern {
	public:
		Intern();
		~Intern();

		AForm* makeForm(const std::string &formName, const std::string &target);

	private:
		FormType getFormType(const std::string &formName);
};
