/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:02:34 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/02/27 12:00:15 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
	protected :
		std::string ideas[100];

	public :
		Brain();
		Brain(const Brain &copy);
		Brain& operator=(const Brain& copy);
		virtual ~Brain();

		void getIdeas();
};
