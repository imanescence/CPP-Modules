/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:02:32 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/22 11:21:31 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

class Array {

	private :
		size_t  n;
		T* 	array;
	
	public :
		
		Array() : n(0), array(NULL) {}
		
		Array(unsigned int _n) : n(static_cast<size_t>(_n)), array(new T[static_cast<size_t>(_n)]()) {}
		
		Array(const Array<T> &copy) : n(copy.n), array(new T[copy.n]) {
			for (size_t i = 0; i < n; ++i) {
	       		array[i] = copy.array[i];
			}
		}

		Array<T> operator=(const Array<T> &copy) {
			if (this == &copy) {
				return *this;
		}
		delete[] array;
        	n = copy.n;
       		array = new T[n];

        	for (size_t i = 0; i < n; ++i) {
            	array[i] = copy.array[i];
        	}

        	return *this;
		}
		
		~Array() {
        	delete[] array;
		}

		T& operator[](int index) {
			if (index < 0 || static_cast<size_t>(index) >= n) {
				throw std::out_of_range("Index out of bounds");
			}
			return array[index];
		}
		
		const T& operator[](int index) const {
			if (index < 0 || static_cast<size_t>(index) >= n) {
				throw std::out_of_range("Index out of bounds");
			}
			return array[index];
		}

		void print() const {
			for (size_t i = 0; i < n; ++i) {
				std::cout << array[i] << " ";
			}
		std::cout << std::endl;
		}

		size_t size() {
			return n;
		}
};
	

