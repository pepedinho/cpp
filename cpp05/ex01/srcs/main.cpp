/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:27:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 12:53:49 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 50);
        Form taxForm("TaxForm", 45, 30);
        
        std::cout << taxForm << std::endl;

        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;

        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();

        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
