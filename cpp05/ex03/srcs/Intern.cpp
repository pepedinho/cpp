/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:24:34 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 22:38:52 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& src) {
  *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& src) {
  (void)src;
  return *this;
}

AForm* Intern::makeForm(std::string name, std::string target) {
  int i = 0;
  std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

  while (i < 3) {
    if (forms[i++] == name)
      break;
  }
  switch (i) {
    case 0:
      return new ShrubberyCreationForm(target);
    case 1:
      return new RobotomyRequestForm(target);
    case 2:
      return new PresidentialPardonForm(target);
    default:
      throw InexistantFormException();
  }
  return NULL;
}
