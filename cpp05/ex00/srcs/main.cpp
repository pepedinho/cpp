/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:27:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/29 17:05:13 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& fx)
{
    os << fx.getName();
    os << ", bureaucrat grade ";
    os << fx.getGrade();
    return os;
}

int main() {
    try {
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;

        john.incrementGrade();
        std::cout << john << std::endl;

        john.decrementGrade();
        std::cout << john << std::endl;

        Bureaucrat boss("Boss", 1);
        std::cout << boss << std::endl;
        boss.incrementGrade();
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat intern("Intern", 150);
        std::cout << intern << std::endl;
        intern.decrementGrade();
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat boss("Big Boss", 0);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat lazy("Lazy", 151);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

