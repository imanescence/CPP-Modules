/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:14:15 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/04/16 15:18:05 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data dataOriginal;
    dataOriginal.value = 19;
    dataOriginal.name = "hello";

    std::cout << "Original Data:\n";
    std::cout << "Address     : " << &dataOriginal << std::endl;
    std::cout << "name        : " << dataOriginal.name << std::endl;
    std::cout << "value       : " << dataOriginal.value << std::endl;

    // Serialization
    uintptr_t raw = Serializer::serialize(&dataOriginal);
    std::cout << "Serialized uintptr_t: " << raw << "\n\n";

    // Deserialization
    Data* dataRecovered = Serializer::deserialize(raw);

    std::cout << "Recovered Data:\n";
    std::cout << "Address     : " << dataRecovered << '\n';
    std::cout << "name        : " << dataRecovered->name << '\n';
    std::cout << "value       : " << dataRecovered->value << "\n\n";

    if (dataRecovered == &dataOriginal)
	    std::cout << "✅ Success: deserialized pointer matches the original.\n";
    else
	    std::cout << "❌ Error: deserialized pointer does NOT match the original.\n";

    return 0;
}
