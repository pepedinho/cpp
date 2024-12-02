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


std::ostream &operator<<(std::ostream &os, const Form &form) {
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
    try {
        Bureaucrat alice("Alice", 50);
        Form taxForm("TaxForm", 45, 30);
        
        std::cout << alice << std::endl;
        std::cout << taxForm << std::endl;

        alice.signForm(taxForm);
        std::cout << alice << std::endl;
        std::cout << taxForm << std::endl;

        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();

        alice.signForm(taxForm);
        std::cout << alice << std::endl;
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
