/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:36:58 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 22:39:35 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"
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
    Intern someRandomIntern;

    Bureaucrat boss("The Boss", 1);

    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* unknownForm;

    std::cout << "\n--- Testing Intern's makeForm() method ---\n" << std::endl;

    try {
        form1 = someRandomIntern.makeForm("shrubbery creation", "Backyard");
        std::cout << "\nForm created: " << form1->getName() << std::endl;
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        form2 = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "\nForm created: " << form2->getName() << std::endl;
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        form3 = someRandomIntern.makeForm("presidential pardon", "Zaphod Beeblebrox");
        std::cout << "\nForm created: " << form3->getName() << std::endl;
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        unknownForm = someRandomIntern.makeForm("unknown form", "Unknown");
        if (unknownForm)
            delete unknownForm;
    } catch (std::exception &e) {
        std::cerr << "\nError: " << e.what() << std::endl;
    }

    std::cout << "\n--- End of tests ---" << std::endl;

    return 0;
}
