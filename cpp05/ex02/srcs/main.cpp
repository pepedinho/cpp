/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:27:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 22:09:46 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "form name : " << form.getName() << std::endl
		<< "Signed ? : " << form.getSigned() << std::endl
		<< "Grade to signed : " << form.getGradeToSign() << std::endl
		<< "Grade to execute : " << form.getGradeToExecute() << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& fx)
{
    os << fx.getName();
    os << ", bureaucrat grade ";
    os << fx.getGrade();
    return os;
}

int main() {
    Bureaucrat lowRank("Low Rank", 150);
    Bureaucrat midRank("Mid Rank", 100);
    Bureaucrat highRank("High Rank", 1);

    ShrubberyCreationForm shrubberyForm("home");
    RobotomyRequestForm robotomyForm("target");
    PresidentialPardonForm pardonForm("target");

    std::cout << "\n--- Testing ShrubberyCreationForm ---\n";
    try {
        std::cout << "Attempting to sign ShrubberyCreationForm with Low Rank...\n";
        std::cout << lowRank << std::endl;
        std::cout << shrubberyForm << std::endl;
        lowRank.signForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to sign ShrubberyCreationForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << shrubberyForm << std::endl;
        midRank.signForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to execute ShrubberyCreationForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << shrubberyForm << std::endl;
        midRank.executeForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    std::cout << "\n--- Testing RobotomyRequestForm ---\n";
    try {
        std::cout << "Attempting to sign RobotomyRequestForm with Low Rank...\n";
        std::cout << lowRank << std::endl;
        std::cout << robotomyForm << std::endl;
        lowRank.signForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to sign RobotomyRequestForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << robotomyForm << std::endl;
        midRank.signForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to execute RobotomyRequestForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << robotomyForm << std::endl;
        midRank.executeForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to sign RobotomyRequestForm with High Rank...\n";
        std::cout << highRank << std::endl;
        std::cout << robotomyForm << std::endl;
        highRank.signForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to execute RobotomyRequestForm with High Rank...\n";
        std::cout << highRank << std::endl;
        std::cout << robotomyForm << std::endl;
        highRank.executeForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    std::cout << "\n--- Testing PresidentialPardonForm ---\n";
    try {
        std::cout << "Attempting to sign PresidentialPardonForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << pardonForm << std::endl;
        midRank.signForm(pardonForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    try {
        std::cout << "Attempting to sign PresidentialPardonForm with High Rank...\n";
        std::cout << highRank << std::endl;
        std::cout << pardonForm << std::endl;
        highRank.signForm(pardonForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempt midRanking to execute PresidentialPardonForm with Mid Rank...\n";
        std::cout << midRank << std::endl;
        std::cout << pardonForm << std::endl;
        midRank.executeForm(pardonForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;

    try {
        std::cout << "Attempting to execute PresidentialPardonForm with High Rank...\n";
        std::cout << highRank << std::endl;
        std::cout << pardonForm << std::endl;
        highRank.executeForm(pardonForm);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    return 0;
}
