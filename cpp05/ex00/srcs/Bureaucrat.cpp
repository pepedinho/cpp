/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:47:08 by itahri            #+#    #+#             */
/*   Updated: 2024/10/29 17:24:09 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade) : _name("unknown") {
  if (grade <= 0)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  _grade = grade;
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade <= 0)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  _grade = grade;
  std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()) {
  *this = other;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
  if (this != &other) {
    _grade = other.getGrade();
  }
  return *this;
} 

std::string Bureaucrat::getName(void) const {
  return _name;
}

int Bureaucrat::getGrade(void) const {
  return _grade;
}

void Bureaucrat::incrementGrade(void) {
  if (_grade - 1 < 1)
    throw GradeTooHighException();
  _grade -= 1;
}

void Bureaucrat::decrementGrade(void) {
  if (_grade + 1 >  150)
    throw GradeTooLowException();
  _grade += 1;
}


