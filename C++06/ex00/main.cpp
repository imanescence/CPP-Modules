/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:36:06 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/16 15:46:00 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	
	if (argc == 2) {
		ScalarConverter::converter(argv[1]);
	}
	
	else
		std::cout << "Error" << std::endl;	

	return (0);
}
