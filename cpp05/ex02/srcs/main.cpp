/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:27:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:22:51 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main() {
    // Création de plusieurs instances de Bureaucrat
    Bureaucrat lowRank("Low Rank", 150);
    Bureaucrat midRank("Mid Rank", 100);
    Bureaucrat highRank("High Rank", 1);

    // Création des formulaires
    ShrubberyCreationForm shrubberyForm("home");
    /*RobotomyRequestForm robotomyForm("target");*/
    /*PresidentialPardonForm pardonForm("target");*/

    // Tests avec ShrubberyCreationForm
    std::cout << "\n--- Testing ShrubberyCreationForm ---\n";
    try {
        std::cout << "Attempting to sign ShrubberyCreationForm with Low Rank...\n";
        lowRank.signForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::cout << "Attempting to sign ShrubberyCreationForm with Mid Rank...\n";
        midRank.signForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::cout << "Attempting to execute ShrubberyCreationForm with Mid Rank...\n";
        midRank.executeForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    // Tests avec RobotomyRequestForm
    /*std::cout << "\n--- Testing RobotomyRequestForm ---\n";*/
    /*try {*/
    /*    std::cout << "Attempting to sign RobotomyRequestForm with Low Rank...\n";*/
    /*    lowRank.signForm(robotomyForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to sign RobotomyRequestForm with Mid Rank...\n";*/
    /*    midRank.signForm(robotomyForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to execute RobotomyRequestForm with Mid Rank...\n";*/
    /*    midRank.executeForm(robotomyForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to sign RobotomyRequestForm with High Rank...\n";*/
    /*    highRank.signForm(robotomyForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to execute RobotomyRequestForm with High Rank...\n";*/
    /*    highRank.executeForm(robotomyForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /*// Tests avec PresidentialPardonForm*/
    /*std::cout << "\n--- Testing PresidentialPardonForm ---\n";*/
    /*try {*/
    /*    std::cout << "Attempting to sign PresidentialPardonForm with Mid Rank...\n";*/
    /*    midRank.signForm(pardonForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to sign PresidentialPardonForm with High Rank...\n";*/
    /*    highRank.signForm(pardonForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to execute PresidentialPardonForm with Mid Rank...\n";*/
    /*    midRank.executeForm(pardonForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/
    /**/
    /*try {*/
    /*    std::cout << "Attempting to execute PresidentialPardonForm with High Rank...\n";*/
    /*    highRank.executeForm(pardonForm);*/
    /*} catch (const std::exception &e) {*/
    /*    std::cerr << "Error: " << e.what() << std::endl;*/
    /*}*/

    return 0;
}
