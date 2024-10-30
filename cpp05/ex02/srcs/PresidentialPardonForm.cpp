/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:03:29 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 22:08:10 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 72, 45) {
  _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 72, 45) {
  _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {
  _target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
  if (this != &src)
    _target = src._target;
  AForm::operator=(src);
  return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
  if (AForm::getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() > AForm::getGradeToExecute())
    throw AForm::GradeTooLowException();
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
