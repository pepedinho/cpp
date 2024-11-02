/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:44:13 by itahri            #+#    #+#             */
/*   Updated: 2024/11/02 00:10:23 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"

int main() {
    try {
        // Testing default constructor
        Array<int> defaultArray;
        std::cout << "Size of default array: " << defaultArray.size() << std::endl;

        // Testing parameterized constructor
        Array<int> intArray(5);
        std::cout << "\nSize of intArray: " << intArray.size() << std::endl;
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 2;
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Testing copy constructor
        Array<int> copyArray(intArray);
        std::cout << "\nCopy of intArray (copyArray):" << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); i++) {
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
        }

        // Modifying the original array to ensure copy independence
        intArray[0] = 100;
        std::cout << "\nAfter modifying intArray[0] to 100:" << std::endl;
        std::cout << "intArray[0] = " << intArray[0] << std::endl;
        std::cout << "copyArray[0] = " << copyArray[0] << " (should not change)" << std::endl;

        // Testing assignment operator
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "\nAssigned array (assignedArray):" << std::endl;
        for (unsigned int i = 0; i < assignedArray.size(); i++) {
            std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
        }

        // Testing bounds checking
        std::cout << "\nAccessing out-of-bounds element:" << std::endl;
        std::cout << intArray[10] << std::endl;  // Should throw an exception

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
