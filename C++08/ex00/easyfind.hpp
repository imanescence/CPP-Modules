/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:30:31 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 16:36:17 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
		if (it == container.end())
			throw std::runtime_error("Value not found");
	return it;

}

