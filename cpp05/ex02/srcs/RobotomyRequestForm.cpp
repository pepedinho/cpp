/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:30:58 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:57:37 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
  _target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
  _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
  _target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
  if (this != &src)
    _target = src._target;
  AForm::operator=(src);
  return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
  if (AForm::getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() > AForm::getGradeToExecute())
    throw AForm::GradeTooLowException();
  if (!std::rand() % 2)
    throw RobotomyRequestForm::RobotomizeFailureException();
  std::cout << _target << " has been robotomized successfully" << std::endl;
}


