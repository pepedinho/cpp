/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:10:59 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 12:52:55 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(int gradeToSign, int gradeToExecute) : _name("unknown"), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
  _isSigned = false;
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
  _isSigned = false;
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
}

Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
  _isSigned = other._isSigned;
}

Form::~Form() {}

Form & Form::operator=(const Form& other) {
  if (this != &other) {
    _isSigned = other._isSigned;
  }
  return *this;
}

std::string Form::getName(void) const {
  return _name;
}

bool Form::getSigned(void) const {
  return _isSigned;
}

int Form::getGradeToSign(void) const {
  return _gradeToSign;
}

int Form::getGradeToExecute(void) const {
  return _gradeToExecute;
}

void Form::beSigned(Bureaucrat& signatory) {
  if (_isSigned)
    std::cout << "This form is already signed" << std::endl;
  if (signatory.getGrade() > _gradeToSign)
    throw GradeTooLowException();
  _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "form name : " << form.getName() << std::endl
		<< "Signed ? : " << form.getSigned() << std::endl
		<< "Grade to signed : " << form.getGradeToSign() << std::endl
		<< "Grade to execute : " << form.getGradeToExecute() << std::endl;
	return os;
}
